
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main(
    int i,j,rows;
    string character;
    cout << "enter a character: ";
    cin >> character;
    string letter_uppercase[26] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    string letter_lowercase[26] = {"a","b","s","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    string numeric[11] = {"0","1","2","3","4","5","6","7","8","9","10"};
    string symbol[30] = {"`","~","!","@","#","$","%","^","&","*","(",")","-","_","=","+","{","[","]","}","|",";",":","'",",","<",">",".","?","/"};
    for (i = 0; i < 26; i++){
        if (letter_uppercase[i] == character){
            cout << "uppercase character\n";
        }
        else if (letter_lowercase[i] == character){
            cout << "lowercase character\n";
        }
    }
    for (i = 0; i < 11; i++){
        if (numeric[i] == character){
           cout << "numeric character\n";
        }
    }
    for (i = 0; i < 30; i++){
        if (symbol[i] == character){
            cout << "symbol character\n";
        }
    }
    cout << "inter number of rows: ";
    cin >> rows;
    int x = rows + 1,z = rows + 1;
    for (i = 1; i <= rows; i++){
        for (j = 1; j <= rows * 2; j++){
            if (j == x || j == z){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        x--;
        z++;
        cout << "\n";
    }
    for (i = 1; i <= (rows * 2) + 1; i++){
        cout << "*";
    }
    }
    return 0;
}
