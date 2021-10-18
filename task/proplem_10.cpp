#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
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
    cout << "count of letters is " << counter;
    }
    myfile_1.close();


return 0;
}
