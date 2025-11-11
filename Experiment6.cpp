#include <iostream>
using namespace std;

class A
{
public:
    int x;
    void get()
    {
        x = 5;
    }
};

class B : public A
{
public:
    int y;
    void set()
    {
        y = 10;
    }
};

class C : public B
{
public:
    void show()
    {
        cout << "Sum: " << x + y;
    }
};

int main()
{
    C c1;
    c1.get();
    c1.set();
    c1.show();
    return 0;
}

#include <iostream>
using namespace std;

class A
{
public:
    int x;
    void getx()
    {
        x = 3;
    }
};

class B
{
public:
    int y;
    void gety()
    {
        y = 4;
    }
};

class C : public A, public B
{
public:
    void show()
    {
        cout << "Mul: " << x * y;
    }
};

int main()
{
    C c1;
    c1.getx();
    c1.gety();
    c1.show();
    return 0;
}

#include <iostream>
using namespace std;

class A
{
protected:
    int n;

public:
    void get()
    {
        n = 5;
    }
};

class B : private A
{
public:
    void sq()
    {
        get();
        cout << "Square = " << n * n;
    }
};

class C : protected A
{
public:
    void cube()
    {
        get();
        cout << "Cube = " << n * n * n << endl;
    }
};

int main()
{
    B x;
    C y;
    x.sq();
    y.cube();
    return 0;
}

#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    void geta()
    {
        a = 2;
    }
};

class B : protected A
{
protected:
    int b;

public:
    void getb()
    {
        b = 3;
    }
};

class C : protected A
{
protected:
    int c;

public:
    void getc()
    {
        c = 4;
    }
};

class D : protected B, protected C
{
public:
    void show()
    {
        geta();
        getb();
        getc();
        cout << "Sum = " << a + b + c;
    }
};

int main()
{
    D d1;
    d1.show();
    return 0;
}

#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    void geta()
    {
        a = 10;
    }
};

class B : virtual protected A
{
protected:
    int b;

public:
    void getb()
    {
        b = 20;
    }
};

class C : virtual protected A
{
protected:
    int c;

public:
    void getc()
    {
        c = 30;
    }
};

class D : protected B, protected C
{
public:
    void show()
    {
        geta();
        getb();
        getc();
        cout << "Sum = " << a + b + c;
    }
};

int main()
{
    D d1;
    d1.show();
    return 0;
}
