#include <iostream>
using namespace std;

template <class T>
T sum(T a[], int n)
{
    T s = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
    }
    return s;
}

int main()
{
    int aI[5] = {1, 2, 3, 4, 5};
    float aF[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double aD[5] = {1.11, 2.22, 3.33, 4.44, 5.55};

    cout << "Int sum = " << sum(aI, 5) << endl;
    cout << "Float sum = " << sum(aF, 5) << endl;
    cout << "Double sum = " << sum(aD, 5) << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

// General Template for squaring numeric types
template <class T>
T sq(T x)
{
    return x * x;
}

// Template Specialization for string type (concatenation)
template <>
string sq(string s)
{
    return s + s;
}

int main()
{
    cout << sq(5) << endl;
    cout << sq(string("Hi!")) << endl;
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

template <class T1, class T2>
class Calculate
{
    T1 a;
    T2 b;

public:
    Calculate(T1 x, T2 y)
    {
        a = x;
        b = y;
    }

    void opp()
    {
        cout << "Sum: " << a + b << endl;
        cout << "Sub: " << a - b << endl;
        cout << "Mul: " << a * b << endl;
        cout << "Div: " << (double)a / b << endl; // Cast for division result
        // Remainder and other operations are omitted for simplicity based on the image,
        // but included for completeness in the previous full transcription.
        // The core template structure is:
        
        // Example of the other operations shown/implied in the notes:
        // cout << "Sin(a): " << sin(a) << endl;
        // cout << "Avg: " << (a + b) / 2.0 << endl;
    }
};

int main()
{
    double x, y;

    cout << "Enter nos (x y): ";
    cin >> x >> y;

    Calculate<double, double> cal(x, y);
    cal.opp();

    return 0;
}

#include <iostream>
using namespace std;

template <typename T>
class Stack
{
    T *a;
    int t; // top index
    int s; // size

public:
    Stack(int size)
    {
        s = size;
        t = -1;
        a = new T[s];
    }

    ~Stack()
    {
        delete[] a;
    }

    bool isFull()
    {
        return t == s - 1;
    }

    bool isEmpty()
    {
        return t == -1;
    }

    void push(T val)
    {
        if (isFull())
        {
            cout << "Stack is Full" << endl;
            return;
        }
        t++;
        a[t] = val;
    }

    T pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return T(); // Returns default value
        }
        return a[t--];
    }

    T peek()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return T();
        }
        return a[t];
    }
};

int main()
{
    // Create a stack for integers with size 5
    Stack<int> s(5);

    s.push(20);
    s.push(30);

    cout << s.pop() << endl;
    cout << s.peek() << endl;
    
    return 0;
}
