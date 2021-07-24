#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>
using namespace std;

int main(){

    int i,pl = 0,n = 10 + pl;
    string name_student[n],x;
    int mark_student[n],y;
    for (i = 0; i < n; i++){
        cout << "enter the name student_" << i + 1 << ": ";
        cin >> x;
        name_student[i] = x;
    }
    cout << "\n";
    for (i = 0; i < n; i++){
        cout << "enter the mark of student " << name_student[i] <<": ";
        cin >> y;
       if (y > 0 && y < 101){
         mark_student[i] = y;
       }
       else {
        cout << "the marks should be greater than 0 and less than 101 please input again: \n";
        i = i - 1;
        pl += 1;
       }
    }
     cout << endl;
    for (i = 0; i < n; i++){
        if (mark_student[i] > 0 && mark_student[i] < 50){
            cout << "mark of " << name_student[i] << " is F";
        }
        else if (mark_student[i] >= 50 && mark_student[i] < 60){
            cout << "mark of " << name_student[i] << " is D";
        }
        else if (mark_student[i] >= 60 && mark_student[i] < 70){
            cout << "mark of " << name_student[i] << " is C";
        }
         else if (mark_student[i] >= 70 && mark_student[i] < 80){
            cout << "mark of " << name_student[i] << " is B";
        }
         else if (mark_student[i] >= 80 && mark_student[i] < 90){
            cout << "mark of " << name_student[i] << " is A";
        }
        else if (mark_student[i] >= 90 && mark_student[i] < 100){
            cout << "mark of " << name_student[i] << " is O";
        }
        cout << endl;
    }
    int mx = mark_student[0],mn = mark_student[0],num_get_A = 0,mx_index = 0,mn_index = 0;
    for (i = 0; i < n; i++){
        if(mark_student[i] >= 80 && mark_student[i] < 90){
            num_get_A++;
        }
        if (mark_student[i] > mx){
            mx = mark_student[i];
            mx_index = i;
        }
        if (mark_student[i] < mn){
            mn = mark_student[i];
            mn_index = i;
        }
    }
    cout << endl;
    cout << "numbers of student get A is: " << num_get_A << endl;
    cout << "the student who get largest mark is: " << name_student[mx_index] << " => his mark is: " << mx <<endl;
    cout << "the student who get smallest mark is: " << name_student[mn_index] << " => his mark is: " << mn;

}
