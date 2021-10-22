#include<iostream>
using namespace std;

string check_odd_even(int n){
    if (n % 2 == 0){
        return "it is even";
    }
    else{
        return "it is odd";
    }

}

void check_perfect(int n){
    int i,sum = 0;
    for (i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    if(sum == n){
        cout << "it is perfect number" << endl;
    }
    else {
        cout << "it is not perfect number" << endl;
    }
}

void aremostrong(int n){
    int i,temp = n,sum = 0,rem;
    while(n != 0){
        rem = n % 10;
        sum += rem *rem *rem;
        n/=10;
    }
    if (sum == temp){
        cout << "it is aremostrong";
    }
    else {
         cout << "it is not aremostrong";
    }

}

void pefect_all_num(int s,int e){
    int i,j,sum;
    for (i = s; i <= e; i++){
        sum = 0;
        for (j = 1; j < i; j++){
            if(i % j == 0){
                sum += j;
            }
        }
        if (sum == i){
            cout << i << " ";
        }
    }

}

int main(){
    int n;
    cout << "enter a  number: ";
    cin >> n;
    cout << check_odd_even(n) << endl;
    check_perfect(n);
    aremostrong(n);
    int s,e;
    cout << "inter number start: ";
    cin >> s;
    cout << "inter number end: ";
    cin >> e;
    pefect_all_num(s,e);



return 0;
}
