#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>
using namespace std;

int main(
    int i,j, n = 10,s = 300,e = 700;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            cout << i << " * " <<  j << " = " << i * j << endl;
        }
        cout << "===================\n";
    }
    for (i  = s; i < e; i++){
        if (i % 4 == 0){
            cout << "the numbers is divisible by 4: " << i << endl;
        }
    }
    cout << "===================\n";
    for (j  = s; j < e; j++){
        if (j % 6 == 0){
            cout << "the numbers is divisible by 6: " << j << endl;
        }
    }

    return 0;
}
