#include <iostream>
using namespace std;

class Area
{
public:
    int cal(int l, int b) // Overloaded function for 2 arguments (Lab)
    {
        return l * b;
    }

    int cal(int a) // Overloaded function for 1 argument (Classroom)
    {
        return a * a;
    }
};

int main()
{
    Area a1;
    cout << "Lab = " << a1.cal(5, 4);
    cout << "Class = " << a1.cal(6);
    return 0;
}

#include <iostream>
using namespace std;

class Sum
{
public:
    float add(float a, float b, float c, float d, float e) // Overloaded function for 5 floats
    {
        return a + b + c + d + e;
    }

    int add(int a1, int a2, int a3, int a4, int a5,
            int a6, int a7, int a8, int a9, int a10) // Overloaded function for 10 integers
    {
        return a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10;
    }
};

int main()
{
    Sum s1;
    cout << "Float = " << s1.add(1.1, 2.2, 3.3, 4.4, 5.5);
    cout << "Int = " << s1.add(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    return 0;
}

#include <iostream>
using namespace std;

class Num
{
    int n;

public:
    Num(int x)
    {
        n = x;
    }

    void operator-() // Overloading the unary minus operator
    {
        n = -n;
    }

    void show()
    {
        cout << "Val = " << n;
    }
};

int main()
{
    Num a(10);
    -a;
    a.show();
    return 0;
}

#include <iostream>
using namespace std;

class Num
{
    int n;

public:
    Num(int x)
    {
        n = x;
    }

    void operator++() // Overloading Pre-increment (prefix)
    {
        ++n;
    }

    void operator++(int) // Overloading Post-increment (postfix) - takes dummy int argument
    {
        n++;
    }

    void show()
    {
        cout << "Val = " << n << endl;
    }
};

int main()
{
    Num a(5);
    ++a;
    a.show();

    a++;
    a.show();
    return 0;
}
