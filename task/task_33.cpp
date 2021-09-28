#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

struct students{
    int id;
    char fullname[50];
    string course_1;
    string course_2;
    string course_3;
    int grad[3];
    float GPA;
};

int main(){
    int i,j,n;
    cout << "enter number of student: ";
    cin >> n;
    students st[n];

    for(i = 0; i < n; i++){
         cout << "enter the id: ";
         cin >> st[i].id;
         cin.ignore();
         cout << "enter the fullname: ";
         cin.getline(st[i].fullname,100);

         cout << "enter the course_1: ";
         getline(cin,st[i].course_1);

         cout << "enter the course_2: ";
         getline(cin,st[i].course_2);

         cout << "enter the course_3: ";
         getline(cin,st[i].course_3);

         for (j = 0; j < 3; j++){
            cout << "enter the grade for course_" << j+1 << ": ";
            cin >> st[i].grad[j];
         }

    }

    for(i = 0; i < n; i++){
        cout << "the id is: " << st[i].id;

        cout << "the fullname is: " << st[i].fullname << endl;

        cout << "the course_1 is: " << st[i].course_1 << endl;

        cout << "the course_2 is: " << st[i].course_2 << endl;

        cout << "the course_3 is: " << st[i].course_3 << endl;

         float sum = 0;
         for (j = 0; j < 3; j++){
            cout << "the grade for course_" << j+1 << " is: " << st[i].grad[j] << endl;
            sum+= st[i].grad[j];
         }
        st[i].GPA = sum/3;
        cout << "the GPA is: " << st[i].GPA;

    }

return 0;
}
