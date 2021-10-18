#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>
using namespace std;

void reserve_arr(int arr[], int n){
  int i,j,temp;
    for (i = 0; i < n; i++){
        for (j = i; j < n; j++){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
           }
        cout << arr[i] << " ";
     }

}

int fuct(int num){
 if (num == 1 || num == 0){
    return 1;
 }
 else{
    return num * fuct(num - 1);
 }

}

int main(){
    int i,j,n,temp = 0;
    cout << "enter number of element: ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++){
        cout << "enter  an element_" << i + 1 << ": ";
        cin >> arr[i];
        if (arr[i] < 0){
            arr[i] = 1;
        }
    }
    reserve_arr(arr,n);
    for (i = 0; i < n; i++){
        cout << "\nfuct of number " << arr[i] << " is: ";
        cout << fuct(arr[i]);
    }


return 0;
}
