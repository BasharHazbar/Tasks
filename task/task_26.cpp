#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

struct student {
  string name;
  int marks[5];
};


int main(){

    // level => 2

    int i,j,n = 3;
    student stud[n];
    for (i = 0; i < n; i++){
        cout << "enter name of student_5" << i + 1<< " : ";
        getline(cin,stud[i].name);
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < 5; j++){
            cout << "enter mark_" << j + 1 << " of student " << stud[i].name << ": ";
            cin >> stud[i].marks[j];
        }
    }
    cout << endl;
    for (i = 0; i < n; i++){
        cout << "\nmarks of student " << stud[i].name << " is: " << endl;
        for (j = 0; j < 5; j++){
         cout << stud[i].marks[j] << " ";
        }
    }



return 0;
}
