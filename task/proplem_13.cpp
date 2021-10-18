#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    int n,i;
    cout << "enter number elements: ";
    cin >> n;
    int arr[n];

    for (i = 0; i < n; i++){
        cout << "enter element: ";
        cin >> arr[i];
    }

    for (i = 0; i < n; i++){
        if (arr[i] >= 0 && arr[i] <= 9){
            arr[i] = 1;
        }
        else{
            arr[i] = 0;
        }
    }

    for (i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }



return 0;
}
