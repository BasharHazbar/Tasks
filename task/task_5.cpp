
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main(
    int rows;
    cout << "enter number of rows: ";
    cin >> rows;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < (rows - (rows - (i + 1))); j++){
            cout << "* ";
        }
        cout << "\n";
    }

    cout << "enter number of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++){
        for (int x = 1; x <= (rows - i); x++){
            cout << " ";
        }
        for (int j = 1; j <= rows - (rows - i); j++){
            cout << "* ";
        }
        cout << "\n";
    }
    for (int i = 1; i <= rows - 1; i++){
        for (int x = 1; x <= rows - (rows - i); x++){
            cout << " ";
        }
        for (int j = 1; j <= rows - i; j++){
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
