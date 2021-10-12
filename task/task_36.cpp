#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    int n,j,i;
    cout << "number of element: ";
    cin >> n;
    int arr[n];

    for (i = 0; i < n; i++){
        cout << "enter elements: ";
         cin >> arr[i];
     }
    // 1
    for (i = 0; i < n; i++){
        if(arr[i] % 5 == 0 && arr[i] % 3 == 0){
            cout << "true" << endl;
        }
        else{
            cout << "false" << endl;
        }
    }


    //2
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

    // 3

    for (i = 0; i < n; i++){
        int x;
        cout << "\nenter element: ";
        cin >> x;
        if (x > 100){
            arr[i] = x;
        }
        else{
            cout << "\nenter agian! > 100:";
            i--;
        }
    }

     for (i = 0; i < n; i++){
         int sum = 0,temp = arr[i];

            for(j = 0; arr[i] != 0; j++){
                int rem = arr[i] % 10;
                sum += rem;
                arr[i] = arr[i] / 10;
         }
         cout << "\nsum digit of " << temp << " is: " << sum << endl;
     }


     for (i = 0; i < n; i++){
         cout << arr[i] << "  ";
     }


    //4

    int first = 0,last = n -1,temp = 0;

    for (i = 0; i < n; i++){
        cout << "enter elements: ";
         cin >> arr[i];
     }

      for (i = 0; i < n; i++){

         while(last > first){
            if(arr[last] % 2 == 0){
                temp = arr[last];
                if(arr[first] %2 != 0){
                    arr[last] = arr[first];
                    arr[first] = temp;
                    last--;
                    first++;
                }
                else{
                    first++;
                }
            }
            else{
                    last--;

            }

         }
      }


    for (i = 0; i < n; i++){
        cout << arr[i] << "  ";
     }















}
