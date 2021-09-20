#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


int main(){

    ofstream myfile;
    myfile.open("file.txt",ios::out);
    string text;
    cout << "enter a sentence: ";
    getline(cin,text);
    myfile << text + "\n";
    myfile.close();


    ifstream myfile_1;
    myfile_1.open("file.txt", ios::in );
    string read;
    while (getline(myfile_1,read)){
    cout << read << endl;
    int charcter = 0,word = 1;
    for (int i = 0; read[i] != '\0'; i++){
        if (read[i] >= 'a' && read[i] <= 'z'){
            charcter++;
        }
        else if (read[i] >= 'A' && read[i] <= 'Z'){
            charcter++;
        }
        if (read[i] == ' '){
            word++;
        }
    }
    cout << "count of charcters is " << charcter << endl;
    cout << "count of words is " << word << endl;
    }
    myfile_1.close();




return 0;
}
