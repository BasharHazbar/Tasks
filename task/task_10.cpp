#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>
using namespace std;

int squere_number(int x){
    int squere = x * x;
    return squere;
}

int swap_tow_num(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}
int main(){
    int num,num_1,num_2;
    cout << "enter a number: ";
    cin >> num;
    cout << squere_number(num);

    cout << "\nenter number_1: ";
    cin >> num_1;
    cout << "enter number_2: ";
    cin >> num_2;
    cout << "befor swap num_1 => " << num_1 << endl;
    cout << "befor swap num_2 => " << num_2 << endl;
    swap_tow_num(num_1,num_2);
    cout << "after swap num_1 => " << num_1 << endl;
    cout << "after swap num_2 => " << num_2;
    return 0;
}
