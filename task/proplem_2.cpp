#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>
using namespace std;


int main(){

 int n,i,j,uppercase = 0,lowercase = 0,number = 0,other_char = 0;
 cout << "enter number of names: ";
 cin >> n;
 string arr_1[n];
 for (i = 0; i < n; i++){
    cout << "enter a name_" << i + 1 << ": ";
    cin >> arr_1[i];
 }

 for (i = 0; i < n; i++){
   cout << "number char of " << arr_1[i] << " is: " << arr_1[i].length() << endl;
 }
 for (i = 0; i < n; i++){
   for (j = 0; j < arr_1[i].length(); j++){
     if (arr_1[i][j] >= 'a' && arr_1[i][j] <= ' z'){
        lowercase++;
     }
     else if (arr_1[i][j] >= 'A' && arr_1[i][j] <= 'Z'){
        uppercase++;
     }
   }
   cout << "number char of uppercase letter  " << arr_1[i] << "  is: " << uppercase << endl;
   cout << "number char of lowercase letter " << arr_1[i] << "  is: " << lowercase;
   uppercase -= uppercase;
   lowercase -= lowercase;
   cout << endl;
 }

 for (i = 0; i < n; i++){
   for (j = 0; j < arr_1[i].length(); j++){
     if (arr_1[i][j] >= 'a' && arr_1[i][j] <= ' z'){
        arr_1[i][j] = arr_1[i][j] - 32;
     }
     else if (arr_1[i][j] >= 'A' && arr_1[i][j] <= 'Z'){
       arr_1[i][j] = arr_1[i][j] + 32;
     }

   }
   cout << arr_1[i] << "  ";
 }




 string text  = "i AM Bashar saleh 989898";
 for (int i = 0; i < text.length(); i++){
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
    }
    else {
        other_char++;
    }
 }


 for (i = 0; i < text.length(); i++){
    if (text[i] == ' '){
        text[i] = text[i + 1];
    }
 }
 cout << "number uppercase in text is " << uppercase << endl;
 cout << "number lowercase in text is " << lowercase << endl;
 cout << "number numbers in text is " << number << endl;
 cout << "number other char text is " << other_char << endl;
 cout << "the text after changes is " << text;
return 0;
}
