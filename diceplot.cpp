#include <iostream>
#include <ctime>

using namespace std;

void printHistogram(int counts[]){

    //  algorithm

    for(int q = 4; q<25; q++){
        cout << endl << q << (":");
        for(int i = 0; i < counts[q-4];i++){
            cout << ("x");
        }
    }

}

int roll(){

    //  variables

    int cast;
    int cast1;
    int cast2;
    int cast3;
    int cast4;


    //  algorithm

        srand(time(0));
        cast1 = (rand()%6)+1;

        cast2 = (rand()%6)+1;

        cast3 = (rand()%6)+1;

        cast4 = (rand()%6)+1;

        cast = cast1+cast2+cast3+cast4;
    return cast;

}

int main () {

    //  variables

    int counts[21];
    for(int i=0; i<21;i++){
        counts[i] = 0;
    }
    int cast = 0;

    //  algorithm

    for(int i = 0; i < 7; i++){
        cast = roll();
        counts[cast] = counts[cast]+1;
    }

    printHistogram(counts);


    return 0;
}

