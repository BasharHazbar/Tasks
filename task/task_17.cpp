#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>
using namespace std;

void letter_uppercase(){

char i = 'A';

do {
    cout << i << " ";
    i++;
} while(i <= 'Z');


}

void letter_lowercase(){

char i = 'a';

do {
    cout << i << " ";
    i++;
} while(i <= 'z');


}

void pyramid_pattern(){

int i,j,n;
cout << "enter number of rows: ";
cin >> n;
for (i = 0; i < n; i++){
    for (j = 1; j <= 2 * n - 1; j++){
        if (j >= n - i && j <= n + i){
            cout << i << " ";
        }
        else {
            cout << "  ";
        }
    }
    cout << endl;
}


}

void dec_to_bin(int n){
 if (n < 1){
    return;
 }
 else {

    dec_to_bin(n / 2);
    cout << n % 2;
 }

}

int main(){

letter_uppercase();
cout << "\n===========================\n";
letter_lowercase();
cout << "\n===========================\n";
pyramid_pattern();
int dec_num;
cout << "enter a dec_num to convert to bin: ";
cin >> dec_num;
cout << "the dec_num " << dec_num << " in bin_num equal is: ";
dec_to_bin(dec_num);
return 0;
}
