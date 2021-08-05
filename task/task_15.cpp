#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>
using namespace std;



int print_num(int n){
  if (n > 50){
    return 0;
  }
  else {
    cout << n << " ";
    print_num(n + 1);

  }
}

int reserve_num(int n){
  if (n < 1){
    return 0;
  }
  else {
    cout << n << " ";
    reserve_num(n - 1);

  }
}


float amount_salary(float hour_work, float salary_hour_work){
 float amount_salary = hour_work * salary_hour_work;
  return amount_salary;
}
float amount_tax(float amount_salary,float tax){
    float amount_tax_salary = amount_salary * tax;
    return amount_tax_salary;
}
float net_salary(float amount_salary,float amount_tax){
    float net_salary = amount_salary - amount_tax;
    return net_salary;
}
int main(){


    print_num(1);
    cout << "\n===============\n";
    reserve_num(50);


    cout << "\n===============================\n";
    float hour_work,salary_hour_work,tax;
    cout << "enter number of hours your work: ";
    cin >> hour_work;
    cout << "enter how much salary_in_hour_work with dollar: ";
    cin >> salary_hour_work;
    cout << "enter how much tax: ";
    cin >> tax;
    float x = amount_salary(hour_work,salary_hour_work);
    float y = amount_tax(x,tax);
    cout << "amount of your salary is: " << x << "$" << endl;
    cout << "the tax of salary is: " << amount_tax(x,tax) << "$" << endl;
    cout << "the amount of net salary is: " << net_salary(x ,y) << "$";
return 0;
}
