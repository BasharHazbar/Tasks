#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

struct student {
  string name;
  int marks[5];
};


int main(){

    // level => 1
    ofstream myfile;
    myfile.open("data.txt",ios::out);
    string text;
    cout << "enter a sentence: ";
    getline(cin,text);
    myfile << text + "\n";
    myfile.close();


    ifstream myfile_1;
    myfile_1.open("data.txt", ios::in );
    string read;
    while (getline(myfile_1,read)){
    cout << read << endl;
    int counter = 0;
    for (int i = 0; read[i] != '\0'; i++){
        if (read[i] >= 'a' && read[i] <= 'z'){
            counter++;
        }
        else if (read[i] >= 'A' && read[i] <= 'Z'){
            counter++;
        }
    }
    cout << "count of letters is " << counter << endl;
    }
    myfile_1.close();
    cout << endl;


    // level => 2

    int i,j,n = 2;
    student stud[n];
    for (i = 0; i < n; i++){
        cout << "enter name of student_" << i + 1<< " : ";
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
