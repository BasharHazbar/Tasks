#include <iostream>
#include <iomanip>
#include <algorithm>



using namespace std;

struct book{
 int id,pages;
 char name[100];
 char auther[100];
 double price;
};

int main(){
    int i,n;
    cout << "number of books do you want register: ";
    cin >> n;
    book books[n];
    for (i = 0; i < n; i++){
        cout << "enter information about book_" << i + 1 << ": " << endl;
        cout << "enter a book_" << i + 1 << " id: ";
        cin >> books[i].id;
        cout << "enter a book_" << i + 1 << " name: ";
        cin >> books[i].name;
        cout << "enter a book_" << i + 1 << " auther: ";
        cin >> books[i].auther;
        cout << "enter a book_" << i + 1 << " pages: ";
        cin >> books[i].pages;
        cout << "enter a book_" << i + 1 << " price: ";
        cin >> books[i].price;
    }
    cout << "============================\n";
    for (i = 0; i < n; i++){
         cout << "the information about book_" << i + 1 << " is: " << endl;
         cout << "the book_" << i + 1 << " id is: " << books[i].id << endl;
         cout << "the book_" << i + 1 << " name is: " << books[i].name << endl;
         cout << "the book_" << i + 1 << " auther is: " << books[i].auther << endl;
         cout << "the book_" << i + 1 << " pages is: " << books[i].pages << endl;
         cout << "the book_" << i + 1 << " price is: " << books[i].price << "$" << endl;
    }


return 0;
}
