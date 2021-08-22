#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>

using namespace std;


void dis_geomatric_series(){
    int i,j,s,e,x,power = 1,total = 1;
    cout << "enter the start of series: ";
    cin >> s;
    cout << "enter the end of series: ";
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
    cout << "the total of series is: " << total;
}

int main(){
dis_geomatric_series();

return 0;
}
