#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>
using namespace std;


void letters(){
 string word;
 cout << "enter any words: ";
 cin >> word;
 int i,letter_upper = 0,letter_lower = 0;

 for (i = 0; i < word.length(); i++){
    if (word[i] >= 'A' && word[i] <= 'Z'){
        letter_upper++;
    }
    else if (word[i] >= 'a' && word[i] <= 'z'){
        letter_lower++;
    }

 }
 cout << "count of letter uppercase is: " << letter_upper << endl;
 cout << "count of letter uppercase is: " << letter_lower << endl;


}

void check_num(){
  int s,e,i,num;
  cout << "enter the start range: ";
  cin >> s;
  cout << "enter the end range: ";
  cin >> e;
  cout << "enter number you want check: ";
  cin >> num;
  string check = "";
  for (i = s; i <= e; i++){
    if (num == i){
        check = "the number is founded.";
        break;
    }
    else {
        check = "the number is not founded.";
    }
  }
  cout << check;

}

int main(){

letters();
check_num();


return 0;
}
