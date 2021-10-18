#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>

using namespace std;


int main(){
   int i,j,s,e,x,power = 1,total = 0;
   cout << "enter a start number: ";
   cin >> s;
   cout << "enter a end number: ";
   cin >> e;
   cout << "enter number of x: ";
   cin >> x;
   for (i = s; i <= e; i++){
      for (j = 1; j <= i; j++){
         power *= x;
      }
     cout << x << " ^ " << i << " = " << power << endl;
     total += power;
     power = 1;
   }
  cout << "the total of result is: " << total << endl;

   cout << "enter a start number: ";
   cin >> s;
   cout << "enter a end number: ";
   cin >> e;
   cout << "enter number of x: ";
   cin >> x;
   for (i = s; i <= e; i++){
      for (j = 1; j <= i; j++){
         power *= x;
      }
     cout << x << " ^ " << i << " = " << power << endl;
     total += power;
     power = 1;
   }
  cout << "the total of result is: " << total << endl;

return 0;
}
