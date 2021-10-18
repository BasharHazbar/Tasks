#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>
using namespace std;

int main(
    int n,p,i;
     cout << "enter number of values: ";
     cin >> n;
     cout << "enter the position: ";
     cin >> p;
     int arr[n];
     for (i = 0; i < n; i++){
        cout << "enter a value_" << i + 1 << ": ";
        cin >> arr[i];
     }
     for (i = 0; i < n; i++){
        cout << arr[i] << " ";
     }
     for (i = p - 1; i < n; i++){
        arr[i] = arr[i + 1];
     }
     cout << "\n";
     for (i = 0; i < n - 1; i++){
        cout << arr[i] << " ";
     }
    cout << "\n==========================\n";
    int mx,mn,sec_mx,sec_mn;
    cout << "enter number of values: ";
    cin >> n;
    for (i = 0; i < n; i++){
        cout << "enter a value_" << i + 1 << ": ";
        cin >> arr[i];
    }
    mx = arr[0];
    mn = arr[0];
    for (i = 0; i < n; i++){
        if (arr[i] > mx){
           sec_mx = mx;
           mx = arr[i];
        }
        else if(arr[i] < mx && arr[i] > sec_mx){
            sec_mx = arr[i];
        }
    }
    for (i = 0; i < n; i++){
        if (arr[i] < mn){
           sec_mn = mn;
           mn = arr[i];
        }
        else if(arr[i] > mn && arr[i] < sec_mn){
            sec_mn = arr[i];
        }
    }
    cout << "the mx number: " << mx << endl;
    cout << "the mn number: " << mn << endl;
    cout << "the sec_mx number: " << sec_mx << endl;
    cout << "the sec_mn number: " << sec_mn;

    return 0;
}
