#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>
using namespace std;


int perfect_num(){
    int i,j,s,e,sum = 0;
    cout << "enter the start number: ";
    cin >> s;
    cout << "enter the end number: ";
    cin >> e;
    cout << "the perfect number from " << s << " to " << e << " is: " << endl;
    for (i = s; i < e; i++){
        for (j = 1; j < i; j++){
            if (i % j == 0){
                sum += j;
            }
        }
        if (i == sum){
            cout << i << " ";
        }
        sum -= sum;

    }
}


int triangle_pattern_above(int n){
     int i,j;
     for (i = 1; i <= n; i++){
     for (j = 1; j <= 2 * n - 1 ; j++){
        if ( j >= n - (n - i) && j <= n + (n - i)){
            cout << "*";
        }
        else{
            cout << " ";
        }
     }

     cout << endl;
   }

}
int triangle_pattern_below(int n){
   int i,j;
   for (i = 1; i <= n - 1; i++){
     for (j = 1; j <= 2 * n - 1 ; j++){
        if ( j >= n - i && j <= n + i){
            cout << "*";
        }
        else{
            cout << " ";
        }
     }

     cout << endl;
   }

}
int main(){
    perfect_num();
   int n;
   cout << "\nenter a number of rows: ";
   cin >> n;

  triangle_pattern_above(n);
  triangle_pattern_below(n);
return 0;
}
