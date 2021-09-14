#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
    struct students {
        int id;
        string name;
        int age;
        string major;

    };
void add_student(students st[],int n){
    for (int i = 0; i < n; i++){
        cout << "enter the id of student_" << i+1 << ": ";
        cin >> st[i].id;
        cout << "enter the name of student_" << i+1 << ": ";
        cin >> st[i].name;
        cout << "enter the age of student_" << i+1 << ": ";
        cin >> st[i].age;
        cout << "enter the major of student_"<< i+1 << ": ";
        cin >> st[i].major;
    }


}

void delete_student(students st[],int n){
    int id;
    cout << "enter an id of student to deleted: ";
    cin >> id;
    for (int i = id - 1; i < n - 1; i++){
        st[i] = st[i + 1];
    }

}

void print_all(students st[],int n){
    for (int i = 0; i < n - 1; i++){
        cout << "the id of student_" << i+1 << ": " << st[i].id << endl;
        cout << "the name of student_" << i+1 << ": " << st[i].name << endl;
        cout << "the age of student_" << i+1 << ": " << st[i].age << endl;
        cout << "the major of student_" << i+1 << ": " << st[i].major << endl;
    }

}

int main(){
    int n = 4;
   students st[n];
   add_student(st,n);
   delete_student(st,n);
   print_all(st,n);

return 0;
}
