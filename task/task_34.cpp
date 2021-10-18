#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


int main(){
    int n = 5,i,j,duplicate = 0,total = 0;
    int arr[n];
    int arr_2[n];
    int arr_3[n];

    for (i = 0; i < n; i++){
        cout << "element_" << i + 1 << ": ";
        cin >> arr[i];
    }

    for (i = 0; i < n; i++){
        arr_2[i] = arr[i];
    }


    cout << "numbers unique is: ";
    for (i = 0; i < n; i++){
        int temp = 0;
        for(j = 0; j < n; j++){
                if(i != j){
                    if(arr[i] == arr[j]){
                       temp++;
                       break;
                    }
                }
        }
        if(temp == 0){
            cout << arr[i] << "  ";
        }
    }











return 0;
}
