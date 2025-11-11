#include <iostream>
#include <string>
using namespace std;

class Str
{
    string s;

public:
    Str(string x) // Parameterized constructor
    {
        s = x;
    }

    Str operator+(Str t) // Overloading binary + operator
    {
        return Str(s + t.s);
    }

    void show()
    {
        cout << s;
    }
};

int main()
{
    Str a("xyz"), b("pqr");
    Str c = a + b;
    c.show();
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class B
{
public:
    virtual void d() // Virtual function in Base Class
    {
        cout << "Base call ";
    }
    
    // The image shows virtual ~B() {} which is the virtual destructor, good practice
    virtual ~B()
    {
    }
};

class D1 : public B
{
public:
    void d() override // Overriding the virtual function
    {
        cout << "Login details ";
    }
};

class D2 : public B
{
public:
    void d() override // Overriding the virtual function
    {
        cout << "Membership details ";
    }
};

int main()
{
    B *p;
    D1 d1;
    D2 d2;

    p = &d1;
    cout << "Display 1: ";
    p->d();

    p = &d2;
    cout << "Display 2: ";
    p->d();
    
    return 0;
}
