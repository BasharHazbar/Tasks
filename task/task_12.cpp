#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>
using namespace std;

void dis_arr(int arr[],int n,int i){
    if (n == i){
        return;
    }

    else{
      cout << arr[i] << " ";
      return dis_arr(arr,n,i + 1);
    }

}

int max_num(int arr[],int n){
   int mx = 1, i = 0;
   if (i < n){
    if (arr[i] > mx){
        mx = arr[i];
    }
    i++;
    max_num(arr,n);

   }
   return mx;
}


int min_num(int arr[],int n){
   int mn = 1, i = 0;
   if (i < n){
    if (arr[i] < mn){
        mn = arr[i];
    }
    i++;
    min_num(arr,n);

   }

   return mn;
}

int main(){
    int n,i;
    cout << "enter numbers of elements: ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++){
        cout << "inter the number_" << i + 1 << ": ";
        cin >> arr[i];
    }
    dis_arr(arr,n,i = 0);
    cout << endl;

    cout << "the max number is: " << max_num(arr,n) << endl;
    cout << "the min number is: " << min_num(arr,n);
    return 0;
}
