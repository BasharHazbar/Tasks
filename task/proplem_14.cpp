#include<iostream>
using namespace std;


int sum(int x,int y){

    return x+y;

}

int sub(){
    int x = 10,y = 5;
    return x-y;

}

void mul(){
    int x = 10,y = 5;
    cout << x*y << endl;

}

void division(int x,int y){
    int result = x / y;
   cout << result;

}

int power(int x,int n){
    int sum = 1;
    for(int i = 0; i < n; i++){
        sum *= x;
    }
    cout << sum;
}

int main(){



     power(6,5);


return 0;
}
