
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main(
    int i,j;
     for (i = 0; i < 5; i++){
        cout << "A ";
        for (j = 0; j < i + 1; j++){

            if (j == 1){
                cout << "B ";
            }

            if (j == 2){
                cout << "C ";
            }

            if (j == 3){
                cout << "D ";
            }

            if (j == 4){
                cout << "E ";
            }

        }
        cout << "\n";
     }
    cout << "==========================\n";
    int n = 8,add = 1;
    char letters = 'A';
    for(i = 1; i <= n; i++){
        for(j = 1; j <= add; j++){
                cout << letters << " ";
                letters++;
        }
        cout << "\n";
        add = add + 1;
    }
    return 0;
}
