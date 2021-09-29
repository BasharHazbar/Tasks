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

void store_all_detials(students st[],int n){
    for(int i = 0; i < n; i++){
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

         for (int j = 0; j < 3; j++){
            cout << "enter the grade for course_" << j+1 << ": ";
            cin >> st[i].grad[j];
         }
    }
}

void modify_detial_student(students st[],int n){
     int temp,chance = 3,stop_chance = 1;
     chance += temp;
     for (int j = 0; j < chance; j++){
         bool is_true = false;
         int id;
         cout << "enter an id of student to modify: ";
         cin >> id;
         for (int i = 0; i < n; i++){
             if(i == (id - 1)){
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

             for (int j = 0; j < 3; j++){
                cout << "enter the grade for course_" << j+1 << ": ";
                cin >> st[i].grad[j];
              }
              is_true = true;
             }
        }
      if(is_true){
        char another_modify;
        cout << "to modify again enter y to no enter any letter: ";
        cin >> another_modify;
        if(another_modify == 'y'){
            cout << "modify agian!" << endl;
            j--;
            temp++;
            stop_chance -= (stop_chance - 1);
        }
        else{
            break;
        }
      }
      else{
        if(stop_chance == 3){
            cout << "sorry the chance end!";
            break;
        }
        else{
           cout << "enter again!" << endl;
           j--;
           stop_chance++;
        }

      }
     }

}

void delete_detial_student(students st[],int n){
    int id;
    cout << "enter an id of student to deleted: ";
    cin >> id;
    for (int i = id - 1; i < n - 1; i++){
        st[i] = st[i + 1];
    }
}

void print_all_detials(students st[],int n){
    for(int i = 0; i < n ; i++){
        cout << "the id is: " << st[i].id << endl;

        cout << "the fullname is: " << st[i].fullname << endl;

        cout << "the course_1 is: " << st[i].course_1 << endl;

        cout << "the course_2 is: " << st[i].course_2 << endl;

        cout << "the course_3 is: " << st[i].course_3 << endl;

         float sum = 0;
         for (int j = 0; j < 3; j++){
            cout << "the grade for course_" << j+1 << " is: " << st[i].grad[j] << endl;
            sum+= st[i].grad[j];
         }
        st[i].GPA = sum/3;
        cout << "the GPA is: " << st[i].GPA << endl;

    }

}

int main(){
    int n;
    cout << "enter number of student: ";
    cin >> n;
    students st[n];

    store_all_detials(st,n);
    cout << "\n==================\n";
    print_all_detials(st,n);
    cout << "\n==================\n";
    modify_detial_student(st,n);
    cout << "\n==================\n";
    print_all_detials(st,n);
    cout << "\n==================\n";
    delete_detial_student(st,n);
    cout << "\n==================\n";
    print_all_detials(st,n);



return 0;
}
