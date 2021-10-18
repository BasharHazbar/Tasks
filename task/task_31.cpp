#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){

    /*
    1. Write a program  to store elements in an array and print it.
2.Write a program to read n number of values in an array and display it in reverse order
3. Write a program to find the sum of all elements of the array.
4. Write a program  to copy the elements of one array into another array.
5. Write a program to check if the number is even or odd
    */

    int i,n=10,sum = 0;
    int arr[n];
    int arr_2[n];

    for (i = 0; i < n; i++){
        cout << "enter an element_" << i + 1 << ": ";
        cin >> arr[i];
    }

    for (i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }

    cout << endl;
    for (i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            cout << "number " << arr[i] << " is even" << endl;
        }
        else{
            cout << "number " << arr[i] << " is odd" << endl;
        }
    }

    cout << "the element in revers: " << endl;
    for (i = 0; i < n; i++){
        cout << arr[n - (i + 1)] << " ";
    }


    cout << "\nthe element in revers_2: " << endl;
    int temp = n;
    for (i = 0; i < n; i++){
        temp--;
        cout << arr[temp] << " ";
    }

    cout << "\nthe element in revers_3: " << endl;
    for (i = n - 1; i >= 0; i--){
        cout << arr[i] << " ";
    }

     cout << "\ncopy: " << endl;
     for (i = 0; i < n; i++){
        arr_2[i] = arr[i];
    }


     for (i = 0; i < n; i++){
        arr_2[i] = arr[i];
     }

    cout << "\nprint arr_2: " << endl;
     for (i = 0; i < n; i++){
        cout << arr_2[i] << "  ";
    }


     for (i = 0; i < n; i++){
        sum+=arr[i];
    }
    cout << "\nsummatoin is " << sum << endl;




return 0;
}
