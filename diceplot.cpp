#include <iostream>
#include <ctime>

using namespace std;

void printHistogram(int counts[]){

    //  algorithm
    int q = 4;
    int z = 4;

    do{
        cout << "\n" << z << (":");
        for( int i = 0; counts[ z - 4] > i ; i++){
            cout << ("x");
        }
        q++;
        z++;
    }while(q<=24);

}

int roll(){

    //  variables

    int cast;
    int cast1;
    int cast2;
    int cast3;
    int cast4;


    //  algorithm


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

    srand(time(0));

    for(int i = 0; i < 500; i++){
        cast = roll();
        counts[cast] = counts[cast]+1;
    }

    printHistogram(counts);


    return 0;
}

