#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>
using namespace std;


/*
int fun_insert(){
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n],i;
    for (i = 0; i < n; i++){
        cout << "enter an element_" << i + 1 << ": ";
        cin >> arr[i];
  }
   for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    int fun_sort(arr,n){


    }

}
*/
int Digit_fun(int arr[],int n){
    int i,digit_num,sum = 0;
    for (i = 0; i < n; i++){
        while(arr[i] > 0){
            digit_num = arr[i] % 10;
            sum += digit_num;
            arr[i] /= 10;
        }

        cout << "the sum of digit element_" << i + 1 << " is: " << sum << endl;
        sum -= sum;
    }

}

int main(){
    int pl = 0,n = n + pl;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n],i;
    for (i = 0; i < n; i++){
        int x;
        cout << "enter an element_" << i + 1 << ": ";
        cin >> x;
        if (x >= 100){
            arr[i] = x;
        }
        else {
            cout << "enter an element again shoud be 3 digit: " << endl;
            i -= 1;
            pl += 1;
        }
  }
  Digit_fun(arr,n);
  return 0;
}
