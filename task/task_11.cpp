#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>
using namespace std;

int prime_or_no(int x){

  if (x % 2 == 0 || x % 3 == 0){
    cout << x << " it is not prime" << endl;
  }
  else {
    cout << x << " it is prime" << endl;
  }

}

int largest_number(int arr[],int n){
    int i,mx = arr[0];
    for (i = 0; i < n; i++){
        if (arr[i] > mx){
            mx = arr[i];
        }
    }
    cout << "the largest number is " << mx;
}

int main (){
   int num,i,n;
   cout << "enter a number: ";
   cin >> num;
   prime_or_no(num);
   cout << "enter numbers of elements: ";
   cin >> n;
   int arr[n];
   for (i = 0; i < n; i++){
        cout << "inter the number_ " << i + 1 << ": ";
        cin >> arr[i];
   }
   largest_number(arr,n);

  return 0;
}
