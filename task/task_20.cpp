#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>

using namespace std;

void pattren_1(int rows){
    int i,j,x;
    for (i = 1; i <= rows; i++){
        for (j = 1; j <= rows - i; j++){
            cout << " ";
        }
        for (x = 1; x <= i; x++){
            cout << x;
        }
        cout << endl;
    }
}

void pattren_2(int rows){
    int i,j,x,y = 1,z = 0;
    for (i = 1; i <= rows; i++){
        for (j = 1; j <= rows - i; j++){
            cout << " ";
        }
        z = i;
        for (x = 1; x <= 2 * i - 1; x++){
            if (x <= i){
                cout << y;
                y++;
            }
            else{
                cout << --z;
            }
        }
        y = 1;
        cout << endl;
    }
}




void pattren_3(int rows){
    int i,j,z = rows,y = rows;
    for (i = 1; i <= rows; i++){
        for (j = 1; j <= 2 * rows - 1; j++){
                if (i == rows || j == z || j == y){
                    cout << "*";
                }
                else {
                    cout << " ";
                }
        }
        z--;
        y++;
        cout << endl;
    }
}

void pattren_4(int rows){
    int i,j,z = rows,y = rows;
    for (i = 1; i <= rows; i++){
        for (j = 1; j <= 2 * rows - 1; j++){
                if (j == z || j == y){
                    cout << "*";
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
    for (i = 1; i <= rows; i++){
        for (j = 1; j <= 2 * rows - 1; j++){
                if (j == z || j == y){
                    cout << "*";
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
int main(){
 int rows;
 cout << "enter number of rows: ";
 cin >> rows;
pattren_1(rows);
pattren_2(rows);
pattren_3(rows);
pattren_4(rows);
return 0;
}
