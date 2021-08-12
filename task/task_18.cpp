#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>
#include <math.h>
using namespace std;

void quadratic_equation(){
  float  a,b,c,delta,root_1,root_2;
  cout << "enter a => x^2: ";
  cin >> a;
  cout << "enter b => x: ";
  cin >> b;
  cout << "enter c: ";
  cin >> c;
  delta = (b * b) - (4 * a * c);
  if (delta > 0){
      cout << "delta > 0" << endl;
      root_1 = (-b + sqrt(delta)) / (2 * a);
      root_2 = (-b - sqrt(delta)) / (2 * a);
      cout << "the root_1 for equation is: " << root_1<< endl;
      cout << "the root_2 for equation is: " << root_2;
  }
  else if (delta == 0){
    cout << "delta = 0" << endl;
    root_1 = root_2 = - b / (2 * a);
    cout << "the root is equal for equation: " << root_1;
  }
  else {
      cout << "delta < 0" << endl;
      root_1 = (-b + sqrt(delta)) / (2 * a);
      root_1 = (-b - sqrt(delta)) / (2 * a);
      cout << "the root_1 for equation is: " << root_1<< endl;
      cout << "the root_2 for equation is: " << root_2;
  }

}

float calculator(){
 float x,y;
 cout << "enter the first value: ";
 cin >> x;
 cout << "enter the first value: ";
 cin >> y;
 string oprations;
 cout << "enter + to add\nenter - to sub\nenter * to multi\nenter / to div: ";
 cin >> oprations;
 if (oprations == "+"){
    return x + y;
 }
 else if (oprations == "-"){
    return x - y;
 }

 else if (oprations == "*"){
    return x * y;
 }

 else if (oprations == "/"){
    return x - y;
 }

}

void number_digits(){
int num;
cout << "enter a number: ";
cin >> num;
if (num == 0){
    cout << "the digit number is: 1";
}

else {
    int counter = 0;
    while(num != 0){
        num /= 10;
        counter++;
    }
    cout << "count digit in number is: " << counter;
}

}

int main(){
 quadratic_equation();
 cout << endl;
 cout << calculator();
 cout << endl;
 number_digits();
return 0;
}
