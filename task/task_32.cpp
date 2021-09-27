#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

struct person{
    string firstname;
    string lastname;
    string birthday;
    string password;
};

Store_user_detials(person pr[], int n){

    for (int i = 0; i < n; i++){
        cout << "enter the firstname: ";
        cin >> pr[i].firstname;

        cout << "enter the lastname: ";
        cin >> pr[i].lastname;

        cout << "enter the birthday: ";
        cin >> pr[i].birthday;

        cout << "enter the password: ";
        cin >> pr[i].password;

    }

}

Check_user_detials(person pr[],int n){
    int i,j;
    for (i = 0; i < n; i++){
        for (j = 0; j < 3; j++){
            string firstname,password;
            cout << "enter your firstname to check: ";
            cin >> firstname;
            cout << "enter your password to check:: ";
            cin >> password;
            if (firstname == pr[i].firstname && password == pr[i].password){
                cout << "the firstname and password is found and correct!" << endl;
                break;
            }
            else{
                if (j < 2){
                    cout << "i will give chance enter agian please!" << endl;
                }
                else{
                    cout << "the chance ended!";
                }
            }
      }
    }

}


int main(){
    int n;
    cout << "enter a number of person: ";
    cin >> n;
    person pr[n];

    Store_user_detials(pr,n);
    cout << "=======================\n";
    Check_user_detials(pr,n);



 return 0;
}
