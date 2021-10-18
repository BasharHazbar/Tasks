#include<iostream>
using namespace std;

int square(int n){

return n * n;
}

void swaping(int x,int y){
    int temp = x;
    x = y;
    y = temp;
    cout << x << endl << y << endl;
}

void check_num(int n){
    if(n % 2 != 0){
        cout << "odd, weird";
    }
    else{
        if(n >= 2 && n <= 5){
            cout << "even, not weird";
        }
        else if(n >= 6 && n <= 20){
            cout << "even, weird";
        }
        else if(n > 20){
            cout << "even, not weird";
        }
    }

}


int main(){
    int n,x,y;
    cin >> n;
    cout << square(n);
    cin >> x >> y;

    swaping(x,y);
    check_num(n);


 return 0;
}
