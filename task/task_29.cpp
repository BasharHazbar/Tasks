#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

struct patient {
    char name[25];
    int age;
    char disease[30];
};

int main(){
    int n = 5,i;
    patient pa[n];

    for (i = 0; i < n; i++){
        cout << "enter name of patient: ";
        cin >> pa[i].name;
        cout << "enter age of patient: ";
        cin >> pa[i].age;
        cout << "enter disease of patient: ";
        cin >> pa[i].disease;
    }
    cout << endl;
    for (i = 0; i < n; i++){
        cout << "the name of patient is: " << pa[i].name << endl;
        cout << "enter age of patient is: " << pa[i].age << endl;
        cout << "enter disease of patient is: " << pa[i].disease << endl;
    }


return 0;
}
