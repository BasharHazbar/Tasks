 #include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>
using namespace std;
void pattren_3(int rows){
    int i,j,x,y = 1;

    for (i = 1; i <= rows; i++){
        for (x = 1; x <= i-1; x++){
            cout << " ";
        }
        for (j = 1; j <= (rows * 2) - y; j++){
                cout << "*";
        }
        y +=2;
        cout << endl;
    }
}
int main(){

  int n,i,j;
  cout << "number of rows: ";
  cin >> n;
 pattren_3(n);
  for (i = 0; i < n; i++){
    for (j = 1; j <= 2 * n - 1; j++){
        if (j == n - i || j == n + i){
            cout << "x";
        }
        else{
            cout << " ";
        }
    }
    cout << endl;
  }

  for (i = 1; i <= n; i++){
    for (j = 1; j <= 2 * n - 1; j++){
        if (j == n - (n - i) || j == n + (n - i)){
            cout << "x";
        }
        else{
            cout << " ";
        }
    }
    cout << endl;
  }


   for (i = 0; i <= n; i++){
    for (j = 1; j <= 2 * n - 1; j++){
        if (j == n - (n - i) || j == n + (n - i)){
            cout << "*";
        }
        else{
            cout << " ";
        }
    }
    cout << endl;
  }

   for (i = 1; i < n; i++){
    for (j = 1; j <= 2 * n - 1; j++){
        if (j == n - i || j == n + i){
            cout << "*";
        }
        else{
            cout << " ";
        }
    }
    cout << endl;
  }
cout << "\n";

for (i = 1; i <= n; i++){
    for (j = 1; j <= n + n; j++){
     if (i==n-(n - 1)||i==n||j==n-(n - 1)||j==n+n){
        cout << "* ";
     }
     else{
       cout << "  ";
     }

  }
  cout << endl;
}

for (i = 1; i <= n; i++){
    for (j = 1; j <= n + n; j++){
     if (i==j || j==n+i){
        cout << "*";
     }
     else{
       cout << " ";
     }

  }
  cout << endl;
}


 return 0;
}
