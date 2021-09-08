#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

struct pers{
    string name,country,phone_number;
};

void take_value (pers pr[]){
  for (int i = 0; i < 5; i++){
     cout << "enter the name of pr_" << i + 1 << ": ";
     getline(cin, pr[i].name);
     cout << "enter the country of pr_" << i + 1 << ": ";
     getline(cin, pr[i].country);
     cout << "enter the phone_number of pr_" << i + 1 << ": ";
     getline(cin, pr[i].phone_number);
     cout << endl;
   }
}

void print_value (pers pr[]){
     for (int i = 0; i < 5; i++){
     cout << "the name of pr_" << i + 1<< " is: " << pr[i].name << endl;
     cout << "the country of pr_" << i + 1 << " is: " << pr[i].country << endl ;
     cout << "the phone_number of pr_" << i + 1 << " is: " << pr[i].phone_number << endl;
     cout << endl;
   }
}

int main (){
    pers pr[5];
    take_value(pr);
    print_value(pr);

return 0;
}
