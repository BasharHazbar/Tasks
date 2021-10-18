#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>
using namespace std;

int fuct(int num){
    if (num == 0 && num == 1){
        return 1;
    }

    else {
        return num * fuct(num - 1);
    }

}


int main(){
    /*
    int i,n;
    cout << "enter a number of array: ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++){
        cout << "enter an element_" << i + 1 << ": ";
        cin >> arr[i];
    }
    int swab = 0,s = 0,e = n - 1;
    for (i = 0; i < n; i++){
        swab = arr[s];
        arr[s] = arr[e];
        arr[e] = swab;
        s++;
        e--;
        cout << arr[i] << " ";
    }
       int i,n;
    cout << "enter a number of array: ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++){
        cout << "enter an element_" << i + 1 << ": ";
        cin >> arr[i];
    }
     for (i = 0; i < n; i++){
        cout << "fact of " << arr[i] << " is " << fuct(arr[i]) << endl;
    }

  */


    cout << fuct(8);

return 0;
}
