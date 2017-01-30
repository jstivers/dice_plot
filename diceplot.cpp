#include <iostream>
#include <ctime>

using namespace std;

void printHistogram(int counts[]){

    //  algorithm

    for(int i = 4; i < 25; i++){
        cout << ("\n") << (i) << (":");
        for(int n=0; n < counts[i]; n++ ){
            cout << counts[i];
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

        srand((unsigned int) time(NULL));
        cast1 = (rand()%6)+1;

        cast2 = (rand()%6)+1;

        cast3 = (rand()%6)+1;

        cast4 = (rand()%6)+1;

        cast = cast1+cast2+cast3+cast4;
    return cast;

}

int main () {

    //  variables

    int counts[24];
    for(int i=0; i<25;i++){
        counts[i] = 0;
    }
    int cast = 0;

    //  algorithm

    for(int i = 0; i < 500; i++){
        cast = roll();
        counts[cast] = counts[cast]+1;
    }

    printHistogram(counts);


    return 0;
}

