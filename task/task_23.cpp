#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


struct person {
    int id,age;
    string name;
};
int main(){
    int i;
    person pr_1,pr_2,pr_3,pr_4,pr_5;

    cout << "enter id of pr_1: ";
    cin >> pr_1.id;
    cout << "enter name of pr_1: ";
    cin >> pr_1.name;
    cout << "enter age of pr_1: ";
    cin >> pr_1.age;

    cout << "enter id of pr_2: ";
    cin >> pr_2.id;
    cout << "enter name of pr_2: ";
    cin >> pr_2.name;
    cout << "enter age of pr_2: ";
    cin >> pr_2.age;

    cout << "enter id of pr_3: ";
    cin >> pr_3.id;
    cout << "enter name of pr_3: ";
    cin >> pr_3.name;
    cout << "enter age of pr_3: ";
    cin >> pr_3.age;

    cout << "enter id of pr_4: ";
    cin >> pr_4.id;
    cout << "enter name of pr_4: ";
    cin >> pr_4.name;
    cout << "enter age of pr_4: ";
    cin >> pr_4.age;

    cout << "enter id of pr_5: ";
    cin >> pr_5.id;
    cout << "enter name of pr_5: ";
    cin >> pr_5.name;
    cout << "enter age of pr_5: ";
    cin >> pr_5.age;

    cout << "the id of pr_1 is: " << pr_1.id << endl;
    cout << "the name of pr_1 is: " << pr_1.name << endl;
    cout << "the age of pr_1 is: " << pr_1.age << endl;

    cout << "the id of pr_2 is: " << pr_2.id << endl;
    cout << "the name of pr_2 is: " << pr_2.name << endl;
    cout << "the age of pr_2 is: " << pr_2.age << endl;

    cout << "the id of pr_3 is: " << pr_3.id << endl;
    cout << "the name of pr_3 is: " << pr_3.name << endl;
    cout << "the age of pr_3 is: " << pr_3.age << endl;

    cout << "the id of pr_4 is: " << pr_4.id << endl;
    cout << "the name of pr_4is: " << pr_4.name << endl;
    cout << "the age of pr_4 is: " << pr_4.age << endl;

    cout << "the id of pr_5 is: " << pr_5.id << endl;
    cout << "the name of pr_5 is: " << pr_5.name << endl;
    cout << "the age of pr_52 is: " << pr_5.age << endl;

    /*
    for (i = 1; i <= 5; i++){
        cout << "enter id of pr_" << i << ": ";
        cin >> pr_1.id;
        cout << "enter name of pr_" << i << ": ";
        cin >> pr_1.name;
        cout << "enter id age pr_" << i << ": ";
        cin >> pr_1.age;
    }

    for (i = 1; i <= 5; i++){
        cout << "enter id of pr_" << i << " is: " << pr_i.id << endl;
        cout << "enter name of pr_" << i << " is: " << pr_i.name << endl;
        cout << "enter age of pr_" << i << " is: " << pr_i.age << endl;
    }


    */

return 0;
}
