
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main(
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

    return 0;
}
