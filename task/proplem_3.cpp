#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>
using namespace std;

int main(){
int n = 0,i,j,uppercase = 0,lowercase = 0,number = 0,other_char = 0,space = 0;
string text  = "i AM khaled saleh 989898";
 for (i = 0; text[i] != '\0'; i++){
    n++;
 }
 for (int i = 0; i < n; i++){
    if (text[i] >= 'a' && text[i] <= 'z'){
        lowercase++;
        text[i] -= 32;
    }
    else if (text[i] >= 'A' && text[i] <= 'Z'){
        uppercase++;
        text[i] += 32;
    }
    else if (text[i] >= '0' && text[i] <= '9'){
        number++;
        for (j = i; j < n; j++){
            text[j] = text[j + 1];
        }
    }
    else {
        other_char++;

    }
 }


 for (i = 0; i < n; i++){
    if (text[i] != ' '){
        text[space++] = text[i];
    }
 }


 cout << "number uppercase in text is " << uppercase << endl;
 cout << "number lowercase in text is " << lowercase << endl;
 cout << "number numbers in text is " << number << endl;
 cout << "number other char text is " << other_char << endl;
 cout << "the text after changes is " << text;

return 0;
}
