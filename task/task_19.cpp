#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>

using namespace std;


void dis_geomatric_series(int s,int e,int x){
    int i,j,power = 1,total = 1;
    cout << "1 + ";
    for (i = s; i <= e; i++){
        for (j = 1; j <= i; j++){
            power *= x;
        }

        cout << power << " + ";
        total += power;
        power = 1;
    }
    cout << " = " << total;
}

void nuture_algorithm(int s,int e,int x){
    float i,j,border,power = 1,total = 0;
    for (i = s; i <= e; i++){
        for (j = 1; j <= i; j++){
            power *= x;
        }
        border = (-1 / i) * power;

        cout << " -1/" << i << "*" << power << " => ";
        cout << border;
        total += border;
        power = 1;
    }
    cout << " = " << total;

}


void taylor_series(int s,int e,int x){
    float i,j,border,power = 1,total = 0,fuct = 1;
    for (i = s; i <= e; i++){
        for (j = 1; j <= i; j++){
            power *= x;
        }
        if (i == 0 || i == 1){
            fuct = 1;
        }
        else {
                for (j = i; j > 1; j--){
                    fuct *= j;
                }
        }
        border = power / fuct;
        total += border;
        //cout << x <<  " ^ " << i << " = " << power << endl;
        //cout << "fuct of " << i << " is: " << fuct << endl;
        //cout << "border =" << border << endl;
        //cout << "=============================\n";
        cout << power << "/" << fuct << " => ";
        cout << border << " + ";
        power = 1;
        fuct = 1;

    }
    cout << " = " << total;

}

int main(){
    int s,e,x;
    cout << "enter the start of series: ";
    cin >> s;
    cout << "enter the end of series: ";
    cin >> e;
    cout << "enter number of x: ";
    cin >> x;
dis_geomatric_series(s,e,x);
cout << endl;
nuture_algorithm(s,e,x);
cout << endl;
taylor_series(s,e,x);
return 0;
}
