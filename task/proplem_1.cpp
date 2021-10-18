#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>
using namespace std;


int main(){

 int arr[] = {1,2,3,4,5,6};
 int *p = &arr[0];
 int sum = 0;
  for (int i = 0; i < 6; i++){
    sum += *(p + i);
 }

 cout << sum << endl;
 int sum_2 = 0;
 for (p = &arr[0]; p <= &arr[5]; p++){
    sum_2 += *p;
 }
cout << sum_2 << endl;

 int sum_3 = 0;
for (p = arr ; p <= arr + 5; p++){
    sum_3+= *p;
 }
cout << sum_3 << endl;


 int n;
 cin >> n;

 int a[n], *k;

for (int i = 0; i < n; i++){
    cin >> *(a + i);
 }

for (int i = 0; i < n; i++){
    cout << *(a + i) << " ";
 }
cout << endl;

for (k = a; k < a + n; k++){
    cin >> *k;
 }
cout << endl;
for (k = a; k < a + n; k++){
    cout << *k << " ";
 }
cout << endl;
for (k = a + n - 1; k >= a; k--){
    cout << *k << " ";
 }

return 0;
}
