#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>
using namespace std;

void printPA(int rows,char letter){
    int i,j,z = rows,y = rows;
    char letter_1 = 'A', letter_2 = 'B';
    for (i = 1; i <= rows - 1; i++){
        for (j = 1; j <= 2 * rows - 1; j++){
                if (j == z){
                    cout << letter_1;
                    letter_1++;
                }

                else if (j == y){
                    cout << letter_2;
                     letter_2++;
                }
                else {
                    cout << " ";
                }
        }
        z--;
        y++;
        cout << endl;
    }
    z = 1,y = 2 * rows - 1;
    letter_1 = letter, letter_2 = letter;
    for (i = 1; i <= rows; i++){
        for (j = 1; j <= 2 * rows - 1; j++){
                if (j == z){
                    cout << letter_1;
                    letter_1--;
                }
                else if (j == y){
                    cout << letter_2;
                     letter_2--;
                }
                else {
                    cout << " ";
                }
        }
        z++;
        y--;
        cout << endl;
    }
}



void printPB(int rows){
    int i,j,x,y = 1;
    for (i = 1; i <= rows - 1; i++){
        for (x = 1; x <= i - 1; x++){
            cout << " ";
        }
        for (j = 1; j <= rows - (i - 1); j++){
               if (y <= rows){
                 cout << y << " ";
               }
               y++;
        }
        y = i + 1;

        cout << endl;
    }
    y = rows;
    for (i = 1; i <= rows; i++){
        for (x = 1; x <= rows - i; x++){
            cout << " ";
        }
        for (j = 1; j <= i; j++){
            if (y <= rows){
                cout << y << " ";
            }
            y++;
        }
        y = rows - i;
        cout << endl;
    }
}

int main(){
    char letter,i;
    int row_1 = 0;
    cout << "enter a char bertween A to Z: ";
    cin >> letter;
    for (i = 'A'; i <= letter; i++){
        row_1++;
    }
    printPA(row_1,letter);

    int row_2;
    cout << "\nenter number rows: ";
    cin >> row_2;
    printPB(row_2);
return 0;
}
