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

#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    void input(int n)
    {
        num = n;
    }

    void dis()
    {
        cout << "Number: " << num << endl;
    }

    friend void swap(Number &a, Number &b);
};

void swap(Number &a, Number &b)
{
    int t = a.num;
    a.num = b.num;
    b.num = t;
}

int main()
{
    Number n1, n2;
    n1.input(43);
    n2.input(67);

    n1.display();
    n2.display();

    swap(n1, n2);

    cout << "Swap " << endl;
    n1.display();
    n2.display();

    return 0;
}
#include <iostream>
using namespace std;

class Class B; // Forward declaration for friend function in Class A

class Class A
{
    int num;

public:
    void input(int n)
    {
        num = n;
    }

    void dis()
    {
        cout << "A Number: " << num << endl;
    }

    friend void swap(A &a, B &b);
};

class Class B
{
    int num;

public:
    void input(int n)
    {
        num = n;
    }

    void dis()
    {
        cout << "B Number: " << num << endl;
    }

    friend void swap(A &a, B &b);
};

void swap(A &a, B &b)
{
    int t = a.num;
    a.num = b.num;
    b.num = t;
}

int main()
{
    A obj1;
    B obj2;

    obj1.input(65);
    obj2.input(9);

    obj1.dis();
    obj2.dis();

    swap(obj1, obj2);

    cout << "Swap " << endl;
    obj1.dis();
    obj2.dis();

    return 0;
}#include <iostream>
using namespace std;

class R2; // Forward declaration

class R1
{
    float m1;

public:
    void input()
    {
        cout << "Enter marks : ";
        cin >> m1;
    }

    friend float avg(R1 r1, R2 r2);
};

class R2
{
    float m2;

public:
    void input()
    {
        cout << "Enter marks : ";
        cin >> m2;
    }

    friend float avg(R1 r1, R2 r2);
};

float avg(R1 r1, R2 r2)
{
    return (r1.m1 + r2.m2) / 2;
}

int main()
{
    R1 obj1;
    R2 obj2;

    obj1.input();
    obj2.input();

    float avge = avg(obj1, obj2);
    cout << "Average : " << avge << endl;

    return 0;
}

#include <iostream>
using namespace std;

class C2; // Forward declaration

class C1
{
    int num1;
public:
    void input(int n) { num1 = n; }
    void display() { cout << "Number in C1: " << num1 << endl; }
    friend void findGreatest(C1 c1, C2 c2);
};

class C2
{
    int num2;
public:
    void input(int n) { num2 = n; }
    void display() { cout << "Number in C2: " << num2 << endl; }
    friend void findGreatest(C1 c1, C2 c2);
};

void findGreatest(C1 c1, C2 c2)
{
    if (c1.num1 > c2.num2)
    {
        cout << "The greatest number is from C1: " << c1.num1 << endl;
    }
    else if (c2.num2 > c1.num1)
    {
        cout << "The greatest number is from C2: " << c2.num2 << endl;
    }
    else
    {
        cout << "The numbers are equal: " << c1.num1 << endl;
    }
}

int main()
{
    C1 obj1;
    C2 obj2;

    obj1.input(45);
    obj2.input(80);

    obj1.display();
    obj2.display();

    findGreatest(obj1, obj2);

    return 0;
}

