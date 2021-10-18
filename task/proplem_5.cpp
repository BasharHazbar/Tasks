#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>
using namespace std;

void check_fun(int arr[],int n){
    int i,left = 0,right = 1,*p = arr;
    for (i = 0; i < n; i++){
        if (arr[i] % 2 == 0 || arr[i] % 3 == 0){
            cout << arr[i] << " the number is not prime" << endl;
        }
        else{
            cout << arr[i] << " the number is prime" << endl;
        }
    }

    for (i = 0; i < n; i++){
        if (*(p + i) % 2 == 0){
          p + (n - right);
          right++;
        }
        else if (*(p + i) % 3 == 0){
            p + left;
            left++;
        }
        if (arr[i] < 0){
            arr[i] = 0;
        }
    }

    for (i = 0; i < n; i++){
        cout << arr[i] << " ";

    }
}

void mystring(string str){
    int i,n = 0,uppercase = 0,lowercase = 0,other = 0;
    for (i = 0; str[i] != '\0'; i++){
        n++;
        cout << str[i];
        if (str[i] == ' '){
            cout << endl;
        }
        if (str[i] >= 'a' && str[i] <= 'z'){
            lowercase++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z'){
            uppercase++;
        }
        else {
            other++;
        }
    }

    cout << "\nsize of text is " << n;
    cout << "\nnumber of letter_upper is: " << uppercase;
    cout << "\nnumber of letter_lower is: " << lowercase;
    cout << "\nnumber of others is: " << other;

}
int main(){

    int i,j,n,temp = 0;
    cout << "enter number of element: ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++){
        cout << "enter  an element_" << i + 1 << ": ";
        cin >> arr[i];
    }
     for (i = 0; i < n; i++){
        for (j = i; j < n; j++){
            if (arr[j] < arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        cout << arr[i] << " ";
     }
    cout << "\n";
    check_fun(arr,n);
   string str = "Hallo I am Bashar";
   cout << endl;
   mystring(str);

return 0;
}
