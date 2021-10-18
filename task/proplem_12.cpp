#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    int n,i,x,y;
    cout << "enter number elements: ";
    cin >> n;
    int arr[n];
    int arr_1[n];
    int arr_2[n];


    for(i = 0; i < n; i++){
        cout << "enter element: ";
        cin >> arr[i];
    }



    x = 0, y= 0;
    for (i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            arr_1[x++] = arr[i];
        }
        else{
            arr_2[y++] = arr[i];
        }
    }

    cout << "odd: ";
    for (i = 0; i < x; i++){
        cout << arr_1[i] << "\t";
    }


    cout << "even: ";
    for (i = 0; i < y; i++){
        cout << arr_2[i] << "\t";
    }




return 0;
}
