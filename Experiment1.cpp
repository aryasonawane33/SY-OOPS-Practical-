#include <iostream>
#include <string>
using namespace std;

class Time {
private:
    int h, m, s, t;
public:
    void accept() {
        cout << "Enter hours: ";
        cin >> h;
        cout << "Enter minutes: ";
        cin >> m;
        cout << "Enter seconds: ";
        cin >> s;
    }

    void display() {
        t = (h * 3600) + (m * 60) + s;
        cout << "Total time = " << t << endl;
    }
};

int main() {
    Time t1;
    t1.accept();
    t1.display();
    return 0;
}


#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int r;
    string n;
public:
    void accept() {
        cout << "Enter name and roll number: ";
        cin >> n >> r;
    }

    void display() {
        cout << "Name = " << n << endl;
        cout << "Roll no. = " << r << endl;
    }
};

int main() {
    Student s1;
    s1.accept();
    s1.display();
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    int bp, bpgs;
    string n;
public:
    void accept() {
        cout << "Enter name and price: ";
        cin >> n >> bp;
        cout << "Enter pages: ";
        cin >> bpgs;
    }

    void display() {
        cout << "Book name = " << n << endl;
        cout << "Book price = " << bp << endl;
        cout << "Book pages = " << bpgs << endl;
    }
};

int main() {
    Book b1, b2;
    b1.accept();
    b2.accept();

    if (b1.bp > b2.bp) {
        cout << "Book with higher price:" << endl;
        b1.display();
    } else {
        cout << "Book with higher price:" << endl;
        b2.display();
    }

    return 0;
}
