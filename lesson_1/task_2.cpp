
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main(

    int num;
    cout << "enter number of values: ";
    cin >> num;
    int arr[n];
    for (int i = 0; i < num; i++){
        cout << "enter the value_" << i + 1 << ": ";
        cin >> arr[i];
    }

    for (int j = 0; j < num; j++){
        cout << arr[num - (j + 1)] << " ";
    }

    cout << "\n==========================\n";

    int arr_1[8] = {0,0,0,0,0,0,0,0}, sum = 0,avrage;
    for (int y = 0; y < 8; y++){
        int elements;
        cout << "enter the element_" << y + 1 << " should be greater or equal 30: " << endl;
        cin >> elements;
        if (elements >= 30){
            arr_1[y] = elements;
        }
        else {
            cout << "enter number greater or equal 30 again: " << endl;
        }

    }
    for (int z = 0; z < 8; z++){
        sum += arr_1[z];
    }
    cout << "the summation of array equal: " << sum << endl;
    avrage = sum / 8;
     cout << "the avrage of array equal: " << avrage << endl;
    if (avrage > 50){
        cout << "the avrage greater than 50";
    }
    else if (avrage < 50){
        cout << "the avrage less than 50";
    }
    return 0;
}
