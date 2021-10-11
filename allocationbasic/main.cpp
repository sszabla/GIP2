//
// Created by student on 11.10.21.
//

#include <iostream>
#include <string.h>
using namespace std;


int main(int argc, char* argv[]){
    int *n = new int;
    int k;
    int c = stoi( argv[1]);
    cout << c << " " << argv[1] << endl;

    cout << n << endl << *n << endl << &n << endl << &k << endl;//n - adres int-a; &n - adres n
    delete n;

    int tab[3] = {3, 2, 1};

    int *tabD = new int[5];
    delete[] tabD;

    int **tabDd = new int*[5];

    for(int i=0; i<5; ++i){
        tabDd[i] = new int[5];
    }
    for(int i=0; i<5; ++i){
        delete[] tabDd[i];
    }
    delete[] tabDd;

    for(int i=0; i<argc; ++i){
        cout<< argv[i] << endl;
    }

    return 0;
}
