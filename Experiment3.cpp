#include <iostream>
#include <string>
using namespace std;

class Book
{
    string t, a;
    float p;

public:
    void accept()
    {
        cout << "Enter book title: ";
        getline(cin, t);
        cout << "Enter author name: ";
        getline(cin, a);
        cout << "Enter price: ";
        cin >> p;
    }

    void dis()
    {
        cout << "Book title: " << t << endl;
        cout << "Book author: " << a << endl;
        cout << "Price: " << p << endl;
    }
};

int main()
{
    Book b1;
    Book *ptr = &b1;
    ptr->accept();
    ptr->dis();
    return 0;
}

#include <iostream>
using namespace std;

class Student
{
    int r;
    float p;

public:
    void accept(int r, float p)
    {
        this->r = r;
        this->p = p;
    }

    void dis()
    {
        cout << "Roll no: " << r << endl;
        cout << "Percentage: " << p << "%" << endl;
    }
};

int main()
{
    Student s;
    int ro;
    float pe;
    cout << "Enter roll no: ";
    cin >> ro;
    cout << "Enter percentage: ";
    cin >> pe;
    s.accept(ro, pe);
    s.dis();
    return 0;
}

#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    void setData(int n)
    {
        num = n;
    }

    void display()
    {
        cout << "Number : " << num << endl;
    }

    void swap(Number &obj)
    {
        int t = num;
        num = obj.num;
        obj.num = t;
    }
};

int main()
{
    Number n1, n2;
    n1.setData(10);
    n2.setData(20);

    n1.display();
    n2.display();

    cout << "Swap: " << endl;
    n1.swap(n2);

    n1.display();
    n2.display();

    return 0;
}
