#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

struct students{
    string name;
    int mark;
    int age;
};

int main(){
    int n = 5;
    students stud[n];
    int i;
    for (i = 0; i < n; i++){
        cout << "enter name of studet: ";
        getline(cin,stud[i].name);
    }
    cout << endl;
    for (i = 0; i < n; i++){
        cout << "enter mark of student_" << stud[i].name << ": ";
        cin >> stud[i].mark;
        cout << "enter age of student_" << stud[i].name << ": ";
        cin >> stud[i].age;
        cout << endl;
    }
   for (i = 0; i < n; i++){
        if (stud[i].mark > 0 && stud[i].mark < 50){
            cout << "mark of " << stud[i].name  << " is F it is fiald";
        }
        else if (stud[i].mark >= 50 && stud[i].mark < 60){
            cout << "mark of " << stud[i].name << " is D";
        }
        else if (stud[i].mark >= 60 && stud[i].mark < 70){
            cout << "mark of " << stud[i].name  << " is C";
        }
         else if (stud[i].mark >= 70 && stud[i].mark < 80){
            cout << "mark of " << stud[i].name << " is B";
        }
         else if (stud[i].mark >= 80 && stud[i].mark < 90){
            cout << "mark of " << stud[i].name << " is A";
        }
        else if (stud[i].mark >= 90 && stud[i].mark < 100){
            cout << "mark of " << stud[i].name  << " is O";
        }
        cout << endl;
    }
    int mx = stud[0].mark,mx_index = 0;
    for (i = 0; i < n; i++){
        if (stud[i].mark > mx){
            mx = stud[i].mark;
            mx_index = i;
        }
    }
    cout << "the student get height mark is: " << stud[mx_index].name << endl << "and his mark is: " << mx;

return 0;
}
