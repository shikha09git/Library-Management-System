#include #include<string.h> #include<stdlib.h>

using namespace std;

class Library { public: int id; char name[100]; char author[100]; char student[100]; int price; int pages; };

int main() { Library lib[20]; int input = 0; int count = 0;

while (input != 3) {
    cout << "enter 1 for input details like id, name, author, student, price, pages" << endl;
    cout << "enter 2 for display details" << endl;
    cout << "enter 3 for quit" << endl;
    cin >> input;
    // Ignore newline character left in input buffer
    cin.ignore(); 

    switch (input) {
        case 1:
            cout << "enter book id:" << endl;
            cin >> lib[count].id;
            cin.ignore(); 
            cout << "enter book name:" << endl;
            cin.getline(lib[count].name, 100,'$');
            cout << "enter book author:" << endl;
            cin.getline(lib[count].author, 100,'$');
            cout << "enter student name:" << endl;
            cin.getline(lib[count].student, 100,'$');
            cout << "enter book price:" << endl;
            cin >> lib[count].price;
            cout << "enter book pages:" << endl;
            cin >> lib[count].pages;
            count++;
            break;

        case 2:
            cout << "Displaying all books:" << endl;
            for (int i = 0; i < count; i++) {
                cout << "book id: " << lib[i].id << endl;
                cout << "book name: " << lib[i].name << endl;
                cout << "book author: " << lib[i].author << endl;
                cout << "student name: " << lib[i].student << endl;
                cout << "book price: " << lib[i].price << endl;
                cout << "book pages: " << lib[i].pages << endl;
                cout << endl;
            }
            break;

        case 3:
            cout << "Exiting program." << endl;
            exit(0);
            break;

        default:
            cout << "You have entered a wrong value, please type again." << endl;
    }
}

return 0;
}
