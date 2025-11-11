#include <iostream>
using namespace std;

class A
{
    int n, s;

public:
    A() // Default constructor
    {
        n = 5;
        s = 0;
        for (int i = 1; i <= n; i++)
        {
            s += i;
        }
        cout << "Sum = " << s;
    }
};

int main()
{
    A a1;
    return 0;
}

#include <iostream>
using namespace std;

class A
{
    int n, s;

public:
    A(int x) // Parameterized constructor
    {
        n = x;
        s = 0;
        for (int i = 1; i <= n; i++)
        {
            s += i;
        }
        cout << "Sum = " << s;
    }
};

int main()
{
    A a1(10);
    return 0;
}

#include <iostream>
using namespace std;

class A
{
    int n, s;

public:
    A(int x) // Parameterized constructor
    {
        n = x;
        s = 0;
        for (int i = 1; i <= n; i++)
        {
            s += i;
        }
    }

    A(A &a) // Copy constructor
    {
        n = a.n;
        s = a.s;
        cout << "Sum = " << s;
    }
};

int main()
{
    A a1(6);
    A a2(a1);
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Student
{
    string n;
    float p;

public:
    Student(string x, float y) // Parameterized constructor
    {
        n = x;
        p = y;
    }

    void show()
    {
        cout << "Name = " << n << " Percent = " << p << endl;
    }
};

int main()
{
    Student s("Arya", 92.2);
    s.show();
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class College
{
    int r;
    string n, c;

public:
    // Constructor with default argument for 'z' (Course)
    College(int x, string y, string z = "CSE")
    {
        r = x;
        n = y;
        c = z;
    }

    void dis()
    {
        cout << "Roll: " << r << " Name: " << n << " Course: " << c << endl;
    }
};

int main()
{
    College a(1, "Arya"), b(2, "Shreya"); // 'c' defaults to "CSE"
    a.dis();
    b.dis();
    return 0;
}

#include <iostream>
using namespace std;

class Box
{
    int l, b, h;

public:
    Box() // Default constructor (initializes to 1x1x1)
    {
        l = b = h = 1;
    }

    Box(int x) // Parameterized constructor for a cube (x*x*x)
    {
        l = b = h = x;
    }

    Box(int x, int y, int z) // Parameterized constructor for a cuboid (x*y*z)
    {
        l = x;
        b = y;
        h = z;
    }

    void dis()
    {
        cout << "Volume = " << l * b * h << endl;
    }
};

int main()
{
    Box a, b(3), c(2, 3, 4);

    a.dis();
    b.dis();
    c.dis();

    return 0;
}

