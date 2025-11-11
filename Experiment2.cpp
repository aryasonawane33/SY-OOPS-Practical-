#include <iostream>
#include <string>
using namespace std;

class City
{
public:
    string n;
    int p;
    void accept()
    {
        cout << "Enter city name and population : ";
        cin >> n >> p;
    }

    void disp() const
    {
        cout << "City: " << n << " Population: " << p;
    }
};

int main()
{
    City c[5];
    cout << "Enter data of 5 cities: \n";

    for (int i = 0; i < 5; i++)
    {
        cout << "City " << i + 1 << ": \n";
        c[i].accept();
    }

    int m = 0;
    for (int i = 1; i < 5; i++)
    {
        if (c[i].p > c[m].p)
        {
            m = i;
        }
    }

    cout << "City with the highest population: \n";
    c[m].disp();
    return 0;
}

#include <iostream>
using namespace std;

class Account
{
public:
    int a;
    double b;

    void input()
    {
        cout << "Enter account no & balance: ";
        cin >> a >> b;
    }

    void add()
    {
        if (b >= 5000)
        {
            b = b + b * 0.10;
        }
    }

    void disp()
    {
        cout << "Account no: " << a << "\n";
        cout << "Balance: " << b << endl;
    }
};

int main()
{
    Account A[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter details for account " << (i + 1) << ": \n";
        A[i].input();
    }

    cout << "Added balance: \n";
    for (int i = 0; i < 10; i++)
    {
        A[i].add(); // This line is based on context; the image has A[i].b >= 5000) which seems like a typo for a call to the add() function.
        A[i].disp();
    }
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Staff
{
public:
    string n, p;

    void getData()
    {
        cout << "Enter name and post: ";
        cin >> n >> p;
    }

    void disp()
    {
        cout << "Name: " << n << ", Post: " << p << endl;
    }
};

int main()
{
    Staff S[5];
    cout << "Enter data for 5 people: \n";

    for (int i = 0; i < 5; i++)
    {
        cout << "Name " << i + 1 << ": \n";
        S[i].getData();
    }

    int m = 0;
    for (int i = 0; i < 5; i++)
    {
        if (S[i].p == "HOD")
        {
            m = i;
        }
    }

    cout << "People who are HODs: \n";
    S[m].disp();
    return 0;
}
