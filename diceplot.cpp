#include <iostream>


using namespace std;

void printHistogram(int counts[]){

    //  algorithm

    for(int q = 4; q<25; q++){
        if(q<10){
            cout << (" ");
        }
        cout << q << (":");
        for( int i = 0; counts[ q - 4] > i ; i++){
            cout << ("x");
        }
        cout << ("\n");
    }

}

int roll(){

    //  variables

    int cast = 0;
    int holder = 0;


    //  algorithm


        for(int i = 0; i < 4; i++){
            holder = rand()%6+0;
            cast = cast + holder;
        }

    return cast;

}

int main () {

    //  variables

    int input = 0;
    int counts[21];
    for(int i=0; i<21;i++){
        counts[i] = 0;
    }
    int cast = 0;

    //  io

    cout << ("How many rolls do you want? ");
    cin >> input;

    //  algorithm

    srand((unsigned int) time(NULL));

    for(int i = 0; i < input; i++){
        cast = roll();
        counts[cast] = counts[cast]+1;
    }

    printHistogram(counts);


    return 0;
}

