#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>
using namespace std;
/*
void number(){
    for(int i = 0; i < 10; i++){
        cout << i << " ";
    }
    cout << endl;
}

long long function_1(int x){
    return x * 5;
}

int small(int a, int b){
    if (a > b){
        return a;
    }
    else{
        return b;
    }
}

void squere_number(){
    int x = 23;
    cout << 23 * x << "\n";
}

void sum (int num_1, int num_2){
   cout << "the sum of numbers is: " <<  num_1 + num_2 << endl;
}
void sub (int num_1, int num_2){
   cout << "the sub of numbers is: " <<  num_1 - num_2 << endl;
}
void multi (int num_1, int num_2){
   cout << "the multi of numbers is: " <<  num_1 * num_2 << endl;
}
void division (int num_1, int num_2){
   cout << "the div of numbers is: " <<  num_1 / num_2 << endl;
}

int fun(int arr[]){
    int mx = arr[0];
    int sm = arr[0];
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
        if (arr[i] > mx){
            mx = arr[i];
        }
        else if (arr[i] < sm){
            sm = arr[i];
        }
    }
    cout << "\nthe largest number is: " << mx << endl;
    cout << "the smallest number is: " << sm;
}

int factor(int n){
    int facto;
    for (int i = 1; i <= n + 1; i++){
        facto += (n - 1) * n;
    }
    cout << "\nthe factor is: " << facto;
}

int numbers(int x, int y, int z){
     if (x > y && x > z){
        return x;

     }
     else if (y > x && y > z){
        return y;
     }
     else if (z > x && z > y){
        return z;
     }

}
int numbers_1(int x, int y, int z){

    if (x < y && x < z){
        return x;

     }
     else if (y < x && y < z){
        return y;
     }
     else if (z < x && z < y){
        return z;
     }
}
*/
int main()
{

     /*
    int x, y;

    cin >> x >> y;
    cout << "Hello world!" << "\n" << x << "\n" << y << "\n";
    cout << x << " + " << y << " = " << (x + y) << endl;
    cout << x << " * " << y << " = " << ((long long)x * y) << endl;
    cout << x << " / " << y << " = " << (x / y) << endl;

    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n";
    cout << "(a * b) * (c * d)" << " = "<< (a * b) * (c * d);
    if (a > b){
        cout << a << "it is bigger";
    }

    else {
        cout << a << "\n it is smal";
    }

    if (a % 2 == 0){
        cout << "\n even";
    }
    else if (a % 3 == 0){
        cout << "\n odd";
    }else{
        cout << "\n prime";
    }

    int id, password;
    cin >> id >> password;
    if(id == password && password == id){
        cout << "your logged to system";
    }
    else{
        cout << "id or password is wrong";
    }

    char our_char;
    cin >> our_char;
    if (our_char == 'a' || our_char == 'e' || our_char == 'i' || our_char == 'o' || our_char == 'u' ){
        cout << "it is vowel";
    }
    else {
        cout << "it is not vowel";
    }

    if (true){
        cout << "bshar";
    }
    else if (false){
        cout << "ali";
    }

    int i = 1, n, mx;
    cin >> n;
    mx = -1;
    while (i <= n){
        int x;
        cin >> x;
        if (x > mx){
            mx = x;
        }
        i += 1;
        cout << "the largest number is" << mx << "\n";
    }

    int n, mx;
    cin >> n;
    mx = 0;
    for (int i = 1; i <= n; i++){

        int x;
        cin >> x;
        if (x < mx){
            mx = x;
        }
    }
    cout << mx;

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
       if (i % 2 == 0){
        cout << i;
       }

    }

    int n, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
                if (i + j == n){
                    cout << j << "+" << i << "=" << j + i << "\n";
                }
                cnt++;
        }
    }
    cout << cnt;


    int n;
    cin >> n;
    int x;
    cin >> x;
    bool found = false;
    int my_arr[n];
    for (int i = 1; i < n; i++){
       cin >> my_arr[i];

       if (my_arr[i] == x){
        found = true;
       }
    }
    if (found){
        cout << "yes";
    }
    else{
        cout << "no";
    }
    cout << my_arr;

    int my_array[5] = {1,2,3,4,5};
    cout << my_array[1] << "\n";
    for (int i = 0; i < 5; i++){
        cout << my_array[i] << "";
    }
    */
    /*
    int row, colum;
    cin >> row, colum;
    int my_array_2[row][row];
    for (int i = 1; i < row; i++){
        for (int j = 1; j < colum; j++){
            cin >> my_array_2[i][j];
        }
    }

    for (int x = 1; x < row; x++){
        for (int y = 1; y < colum; y++){
            cout << my_array_2[x][y] << " ";
        }
    }

    int row,colum;
    cin >> row;
    cin >> colum;
    int my_array[row][colum];
    for (int x = 0; x < row; x++){
            for (int y = 0; y < colum; y++){
                cin >> my_array[x][y];
            }
    }


    for (int i = 0; i < row; i++){
            for (int j = 0; j < colum; j++){
                cout << my_array[i][j] << " ";
            }
    cout << endl;
    }

    string x, y;
    cin >> x >> y;
    cout << x << " " << y << endl;
    cout << x.size() << " " << y.size();

    int n;
    cin >> n;
    int my_array[n];
    for (int i = 0; i < n; i++){
        cin >> my_array[i];
    }
    sort(my_array,my_array + n);
    for (int x = 0; x < n; x++){
        cout << my_array[x] << " ";
    }

    for (int x = 0; x < 50; x++){
        number();
    }

    int n;
    cin >> n;
     for (int x = 0; x < n; x++){
        cout << function_1(x) << " + " << function_1(x * 32323343434) << " = " << function_1(x) + function_1(x * 32323343434)<< "\n";
    }

    int x,y;
    cin >> x >> y;
    cout << small(x, y) << "\n";

    string name, age;
    cout << "enter your name \n";
    cin >> name;
    cout << "enter your age \n";
    cin >> age;
    cout << "your name is " << name;
    cout << " And your age is " << age;

    int x, y;
    cout << "enter the first number: ";
    cin >> x;
    cout << "enter the second number: ";
    cin >> y;
    cout << "the sum is: " << x+y << "\n";
    cout << "the sub is: " << x-y << "\n";
    cout << "the div is: " << ((float)x/y) << "\n";
    cout << "the mult is: " << x*y << "\n";

    int x, y, z, r;
    double  reduis, ip = 3.14;
    cout << "enter the first number: ";
    cin >> x;
    cout << "enter the second number: ";
    cin >> y;
    cout << "enter the third number: ";
    cin >> y;
    cout << "enter area circle: ";
    cin >> r;
    cout << "the average is " << (x + y + z) / 3 << "\n";
    reduis = r * r * ip;
    cout << "the reduis " << reduis;
    ========================
    int x, y, z;
    cin >> x >> z;
    y = x;
    x = z;
    z = y;
    cout << "x: " << x << "\n";
    cout << "y: " << y;
    =========================

    int x;
    cout << "enter a number_1: ";
    cin >> x;
    cout << "x^2: " << x*x;

    int a,b,c,d;
    cout << "enter num_1: ";
    cin >> a;
    cout << "enter num_2: ";
    cin >> b;
    cout << "enter num_3: ";
    cin >> c;
    d = 2*a + 3*b + c;
    cout << "the result of '2*a + 3*b + c' is: " << d;

    int day,mun,sec,hour,month,year,result_1,result_2;
    cout << "enter day or days: ";
    cin >> day;
    mun = 24 * 60;
    sec = mun * 60;
    hour = day * 24;
    result_1 = day * mun;
    result_2 = day * sec;
    month = day / 30;
    year = month / 12;
    cout << "the seconds = " << result_2 << "\n";
    cout << "the munits = " << result_1 << "\n";
    cout << "the hours = " << hour << "\n";
    cout << "the month = " << month << "\n";
    cout << "the years = " << year;

     int n, mx,sum;
     cout << "enter amount number: ";
     cin >> n;
     mx = 0;
     sum = 0;
     for (int i = 0; i < n; i++){
        int numbers;
        cout << "enter number_" << i + 1 << ": ";
        cin >> numbers;
        if(numbers > mx){
            mx = numbers;
        }
        if (numbers % 2 == 0){
            cout << "the numbers is even\n";
        }
        else if (numbers % 3 == 0){
            cout << "the numbers is odd\n";
        }
        else{
            cout << "the numbers is prime\n";
        }
        sum += numbers;
    }
    cout << "the largest number is " << mx;
    cout << "\nthe summetion is: " << sum;

  int n;
    cout << "enter a how many number: ";
    cin >> n;
    int my_array[n];
    for(int i = 0; i < n; i++){

        cout << "enter the element_" << i + 1 << ": ";

        cin >> my_array[i];
    }
    int mx = my_array[0];
    int sm = my_array[0];
    for(int j = 0; j < n; j++){
       if (my_array[j] > mx){
        mx = my_array[j];
       }
       if (my_array[j] < sm){
        sm = my_array[j];
       }
    }
    cout << "the biggest number is: " << mx << "\n";
    cout << "the smallest number is: " << sm;

    int my_array[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << my_array[1] << "\n";
    cout << my_array[4] << "\n";
    cout << my_array[6] << "\n";
    cout << my_array[9];

    long long n, reversedNumber = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while(n != 0) {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << reversedNumber;

    int n;
    cout << "how many must be even: ";
    cin >> n;
    int my_arr[n];
    for (int i = 0; i < n; i++){
        cout << "enter an elements: ";
        cin >> my_arr[i];
    }

    if (n % 2 == 0){
    for (int j = 0; j < n/2; j++){
        cout << my_arr[j] << " ";
    }
    cout << "\n";
        for (int k = 0; k < n/2; k++){
            cout << my_arr[k + n/2] << " ";
        }
    }

    else if (n % 3 == 0){
        for (int f = 0; f < (n-1)/2; f++){
            cout << my_arr[f] << " ";
        }
        cout << "\n";
        for (int v = 0; v < (n-((n-1)/2)); v++){
            cout << my_arr[(n-(((n-1)/2) + 1)) + v] << " ";
        }
    }


     int row,column;
     cout << "enter hoe many rows: ";
     cin >> row;
     cout << "enter hoe many columns: ";
     cin >> column;
     int my_array[row][column];
     int my_array_1[row][column];
     for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            cout << "enter an element of array_" << j + 1 << ": ";
            cin >> my_array[i][j];
        }
     }

     for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            cout << "enter an element of array_1_" << j + 1 << ": ";
            cin >> my_array_1[i][j];
        }
     }

    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            cout << my_array[i][j] +  my_array_1[i][j] << " ";
        }
        cout << "\n";
     }

     int number;
     cout << "enter how many numbers: ";
     cin >> number;
     int my_array[number];
     for (int x = 1; x <= number; x++){
        my_array[x] = x;
     }
     for (int y = 1; y <= number; y++){
        if (my_array[y] % 4 == 0){
             cout << my_array[y] << " ";
        }
    }

    int x;
    cout << "enter a num_1: ";
    cin >> x;
    int y;
    cout << "enter a mum_2: ";
    cin >> y;
    cout << "1.sum\n2.sub\n3.multi\n4.div" << endl;
    int choise;
    cin >> choise;
    if (choise == 1){
        sum(x,y);
    }
    else if (choise == 2){
        sub(x,y);
    }
    else if (choise == 3){
        multi(x,y);
    }
    else if (choise == 4){
        division(x,y);
    }
    else {
        cout << "enter the number determined!!";
    }

    int arr[5] = {1,2,3,4,5};
    fun(arr);
    int x = 5;
    factor(x);
    int a = 2;
    int b = 3;
    int c = 5;
    cout << "\nthe greatest is " << numbers(a,b,c);
    cout << "\nthe smallest is " << numbers_1(a,b,c);

    int x;
    cout << "enter a number: ";
    cin >> x;
    cout << "\nthe number is: " << x;
    cout << "\nthe address of number is " << &x;

    int fish = 6;
    cout << "\nthe address of number is fish: " << fish;
    int *pointrtfish;
    pointrtfish = &fish;
    cout << "\nthe address of number is pointrtfish: " << *pointrtfish;

    int x = 3;
    int *pntx;
    pntx = &x;
    int y = 7;
    int *pnty;
    pnty = &y;
    int b = *pntx + *pnty;
    int c = x  + y;
    cout << "total = " << b<< endl;
    cout << "total = " << c << endl;

    int temp = *pntx;
    *pntx = *pnty;
    *pnty = temp;
    cout << *pntx << " >> " << x << endl;
    cout << *pnty << " >> " << y << endl;

    char name[] = "bashar";
    cout << name;
    char *ptr;
    ptr = name;
    *ptr = 'a';
    cout << name << endl;
    ptr += 2;
    *ptr = 'b';
    cout << name << endl;
    for (int i = 0; i < 6; i++){
        cout << *(name + (6 - (i + 1))) << " ";
    }

    int n,x;
    cout << "enter how many number: ";
    cin >> n;
    int *ptr;
    int arr[n];
    ptr = arr;
    for (int i = 0; i < n; i++){
        cout << "enter an elements: " << i + 1 << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        cout << *(ptr + i) << " ";
    }
    */

























    /*

    float radius,perimeter_circle,area_circle;
    cout << "enter the radius: ";
    cin >> radius;
    area_circle = 3.14 * (radius * radius);
    perimeter_circle = 3.14 * radius;
    if (radius > 0){
        cout << "the area_circle equal: " << area_circle << endl;
        cout << "the perimeter_circle equal: " << perimeter_circle << endl;
    }
    else if (radius == 0){
        cout << "there is no raduis equal zero" << endl;
    }
    else if (radius < 0){
        cout << "i will give just 3 chance to input positive radius" << endl;
        for (int i = 1; i <= 3; i++){
            if (i == 1){
                cout << "inter the radius agian_1: ";
                cin >> radius;
                if (radius > 0){
                    area_circle = 3.14 * (radius * radius);
                    perimeter_circle = 3.14 * radius;
                    cout << "the area_circle equal: " << area_circle << endl;
                    cout << "the perimeter_circle equal: " << perimeter_circle << endl;
                    break;
                }
                else {
                     cout << "inter the radius agian_2: ";
                }
            }
            if (i == 2){
                cin >> radius;
                if (radius > 0){
                    area_circle = 3.14 * (radius * radius);
                    perimeter_circle = 3.14 * radius;
                    cout << "the area_circle equal: " << area_circle << endl;
                    cout << "the perimeter_circle equal: " << perimeter_circle << endl;
                    break;
                }
                else {
                     cout << "inter the radius agian_3: ";
                }
            }
            if (i == 3){
                cin >> radius;
                if (radius > 0){
                    area_circle = 3.14 * (radius * radius);
                    perimeter_circle = 3.14 * radius;
                    cout << "the area_circle equal: " << area_circle << endl;
                    cout << "the perimeter_circle equal: " << perimeter_circle << endl;
                    break;
                }
                else {
                     cout << "the chance is end\n";
                     break;
                }
            }
        }
    }

    cout << "==========================\n";

    int n;
    cout << "enter a how many number: ";
    cin >> n;
    int my_array[n];
    for(int i = 0; i < n; i++){

        cout << "enter the element_" << i + 1 << ": ";

        cin >> my_array[i];
    }
    int mx = my_array[0];
    int sm = my_array[0];
    for(int j = 0; j < n; j++){
       if (my_array[j] > mx){
        mx = my_array[j];
       }
       if (my_array[j] < sm){
        sm = my_array[j];
       }
    }
    cout << "the max number is: " << mx << "\n";
    cout << "the min number is: " << sm;

    cout << "\n==========================\n";

    int num;
    cout << "enter number of values: ";
    cin >> num;
    int arr[n];
    for (int i = 0; i < num; i++){
        cout << "enter the value_" << i + 1 << ": ";
        cin >> arr[i];
    }

    for (int j = 0; j < num; j++){
        cout << arr[num - (j + 1)] << " ";
    }

    cout << "\n==========================\n";

    int arr_1[8] = {0,0,0,0,0,0,0,0}, sum = 0,avrage;
    for (int y = 0; y < 8; y++){
        int elements;
        cout << "enter the element_" << y + 1 << " should be greater or equal 30: " << endl;
        cin >> elements;
        if (elements >= 30){
            arr_1[y] = elements;
        }
        else {
            cout << "enter number greater or equal 30 again: " << endl;
        }

    }
    for (int z = 0; z < 8; z++){
        sum += arr_1[z];
    }
    cout << "the summation of array equal: " << sum << endl;
    avrage = sum / 8;
     cout << "the avrage of array equal: " << avrage << endl;
    if (avrage > 50){
        cout << "the avrage greater than 50";
    }
    else if (avrage < 50){
        cout << "the avrage less than 50";
    }

    cout << "\n==========================\n";

    int degree_student[10];
    char name_student[10];

    for (int i = 0; i < 10; i++){

        int degree;
        cout << "enter the degree_student_" << i + 1 << ": " << endl;
        cin >> degree;
        if (degree <= 0){
            cout << "enter the degree again should be greater the zero: ";
            continue;
        }
        else if(degree > 100){
             cout << "enter the degree again should be less the 100: ";
             continue;
        }
        else {
            degree_student[i] = degree;
        }



    }
    for (int j = 0; j < 10; j++){
        cout << "enter the name_student" << j + 1 << ": " << endl;
        cin >> name_student[j];
    }
    for (int z = 0; z < 10; z++){
        cout << degree_student[z] << " ";
        cout << name_student[z] << " " <<endl;

    }

    cout << "\n==========================\n";
    int arr[10],n = 10,temp;
    for (int i = 0; i < n ; i++){
        arr[i] = i;
    }
    for (int x = 0; x < n; x++){
        for (int z = x + 1; z < n; z++){
            if (arr[z] < arr[x]){
                temp = arr[x];
                arr[x] = arr[z];
                arr[z] = temp;
            }
        }
    }
    cout << "the array sort it in ascending order: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
        for (int x = 1; x < n; x++){
            for (int z = x + 1; z < n; z++){
                if (arr[x] < arr[z]){
                temp =arr[x];
				arr[x]=arr[z];
				arr[z]=temp;
            }
        }
    }
    cout << "\n";
    cout << "the array sort it in descending order: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

   cout << "\n==========================\n";
    int size_arr = 1000, sum = 0;
    int arr_1[size_arr];
    for (int i = 0; i < size_arr ; i++){
        arr_1[i] = i;
    }
    for (int j = 0; j < size_arr ; j++){
       for (int y = 1; y < arr_1[j]; y++){
            if (arr_1[j] % y == 0){
                cout << arr_1[j] << " ";
        }
       }
    }
    cout << "\n==========================\n";

    int rows;
    cout << "enter number of rows: ";
    cin >> rows;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < (rows - (rows - (i + 1))); j++){
            cout << "* ";
        }
        cout << "\n";
    }

    cout << "enter number of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++){
        for (int x = 1; x <= (rows - i); x++){
            cout << " ";
        }
        for (int j = 1; j <= rows - (rows - i); j++){
            cout << "* ";
        }
        cout << "\n";
    }
    for (int i = 1; i <= rows - 1; i++){
        for (int x = 1; x <= rows - (rows - i); x++){
            cout << " ";
        }
        for (int j = 1; j <= rows - i; j++){
            cout << "* ";
        }
        cout << "\n";
    }

     int n,p,i;
     cout << "enter number of values: ";
     cin >> n;
     cout << "enter the position: ";
     cin >> p;
     int arr[n];
     for (i = 0; i < n; i++){
        cout << "enter a value_" << i + 1 << ": ";
        cin >> arr[i];
     }
     for (i = 0; i < n; i++){
        cout << arr[i] << " ";
     }
     for (i = p - 1; i < n; i++){
        arr[i] = arr[i + 1];
     }
     cout << "\n";
     for (i = 0; i < n - 1; i++){
        cout << arr[i] << " ";
     }
    cout << "\n==========================\n";
    int mx,mn,sec_mx,sec_mn;
    cout << "enter number of values: ";
    cin >> n;
    for (i = 0; i < n; i++){
        cout << "enter a value_" << i + 1 << ": ";
        cin >> arr[i];
    }
    mx = arr[0];
    mn = arr[0];
    for (i = 0; i < n; i++){
        if (arr[i] > mx){
           sec_mx = mx;
           mx = arr[i];
        }
        else if(arr[i] < mx && arr[i] > sec_mx){
            sec_mx = arr[i];
        }
    }
    for (i = 0; i < n; i++){
        if (arr[i] < mn){
           sec_mn = mn;
           mn = arr[i];
        }
        else if(arr[i] > mn && arr[i] < sec_mn){
            sec_mn = arr[i];
        }
    }
    cout << "the mx number: " << mx << endl;
    cout << "the mn number: " << mn << endl;
    cout << "the sec_mx number: " << sec_mx << endl;
    cout << "the sec_mn number: " << sec_mn;

     int i,j;
     for (i = 0; i < 5; i++){
        cout << "A ";
        for (j = 0; j < i + 1; j++){

            if (j == 1){
                cout << "B ";
            }

            if (j == 2){
                cout << "C ";
            }

            if (j == 3){
                cout << "D ";
            }

            if (j == 4){
                cout << "E ";
            }

        }
        cout << "\n";
     }
    cout << "==========================\n";
    int n = 8,add = 1;
    char letters = 'A';
    for(i = 1; i <= n; i++){
        for(j = 1; j <= add; j++){
                cout << letters << " ";
                letters++;
        }
        cout << "\n";
        add = add + 1;
    }
    cout << "===================\n";

    int i,j, n = 10,s = 300,e = 700;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            cout << i << " * " <<  j << " = " << i * j << endl;
        }
        cout << "===================\n";
    }
    for (i  = s; i < e; i++){
        if (i % 4 == 0){
            cout << "the numbers is divisible by 4: " << i << endl;
        }
    }
    cout << "===================\n";
    for (j  = s; j < e; j++){
        if (j % 6 == 0){
            cout << "the numbers is divisible by 6: " << j << endl;
        }
    }


    int i,j,rows;
    string character;
    cout << "enter a character: ";
    cin >> character;
    string letter_uppercase[26] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    string letter_lowercase[26] = {"a","b","s","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    string numeric[11] = {"0","1","2","3","4","5","6","7","8","9","10"};
    string symbol[30] = {"`","~","!","@","#","$","%","^","&","*","(",")","-","_","=","+","{","[","]","}","|",";",":","'",",","<",">",".","?","/"};
    for (i = 0; i < 26; i++){
        if (letter_uppercase[i] == character){
            cout << "uppercase character\n";
        }
        else if (letter_lowercase[i] == character){
            cout << "lowercase character\n";
        }
    }
    for (i = 0; i < 11; i++){
        if (numeric[i] == character){
           cout << "numeric character\n";
        }
    }
    for (i = 0; i < 30; i++){
        if (symbol[i] == character){
            cout << "symbol character\n";
        }
    }
    cout << "inter number of rows: ";
    cin >> rows;
    int x = rows + 1,z = rows + 1;
    for (i = 1; i <= rows; i++){
        for (j = 1; j <= rows * 2; j++){
            if (j == x || j == z){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        x--;
        z++;
        cout << "\n";
    }
    for (i = 1; i <= (rows * 2) + 1; i++){
        cout << "*";
    }

 */
    int i,pl = 0,n = 10 + pl;
    string name_student[n],x;
    int mark_student[n],y;
    for (i = 0; i < n; i++){
        cout << "enter the name student_" << i + 1 << ": ";
        cin >> x;
        name_student[i] = x;
    }
    cout << "\n";
    for (i = 0; i < n; i++){
        cout << "enter the mark of student " << name_student[i] <<": ";
        cin >> y;
       if (y > 0 && y < 101){
         mark_student[i] = y;
       }
       else {
        cout << "the marks should be greater than 0 and less than 101 please input again: \n";
        i = i - 1;
        pl += 1;
       }
    }

    for (i = 0; i < n; i++){
        if (mark_student[i] > 0 && mark_student[i] < 50){
            cout << "mark of " << name_student[i] << " is F";
        }
        else if (mark_student[i] >= 50 && mark_student[i] < 60){
            cout << "mark of " << name_student[i] << " is D";
        }
        else if (mark_student[i] >= 60 && mark_student[i] < 70){
            cout << "mark of " << name_student[i] << " is C";
        }
         else if (mark_student[i] >= 70 && mark_student[i] < 80){
            cout << "mark of " << name_student[i] << " is B";
        }
         else if (mark_student[i] >= 80 && mark_student[i] < 90){
            cout << "mark of " << name_student[i] << " is A";
        }
        else if (mark_student[i] >= 90 && mark_student[i] < 100){
            cout << "mark of " << name_student[i] << " is O";
        }
        cout << endl;
    }
    int mx = mark_student[0],mn = mark_student[0],num_get_A = 0,mx_index = 0,mn_index = 0;
    for (i = 0; i < n; i++){
        if(mark_student[i] >= 80 && mark_student[i] < 90){
            num_get_A++;
        }
        if (mark_student[i] > mx){
            mx = mark_student[i];
            mx_index = i;
        }
        if (mark_student[i] < mn){
            mn = mark_student[i];
            mn_index = i;
        }
    }

    cout << "numbers of student get A is: " << num_get_A << endl;
    cout << "the largest marks is: " << mx << endl;
    cout << "the largest mark is: " << mn << endl;
    cout << "the student who get largest mark is: " << name_student[mx_index] << endl;
    cout << "the student who get smallest mark is: " << name_student[mn_index] << endl;

    for (i = 0; i < n; i++){
        cout << name_student[i] << " ";
    }
    cout << endl;
    for (i = 0; i < n; i++){
        cout << mark_student[i] << " ";
    }
    return 0;
}
