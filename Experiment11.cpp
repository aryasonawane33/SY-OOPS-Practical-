#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Vec
{
private:
    vector<T> v;
    int size;

public:
    Vec(int n) : size(n)
    {
        v = vector<T>(n);
    }

    void set(int idx, T val)
    {
        if (idx >= 0 && idx < size) {
            v[idx] = val;
        }
    }

    void modify(int i, T x)
    {
        if (i >= 0 && i < size) {
            v[i] = x;
        }
    }

    void mult(T s)
    {
        for (int i = 0; i < size; i++)
        {
            v[i] = v[i] * s;
        }
    }

    void mult()
    {
        for (typename vector<T>::iterator i = v.begin(); i != v.end(); ++i)
        {
            *i *= 2;
        }
    }

    void display() const
    {
        cout << "(";
        for (int i = 0; i < size; i++)
        {
            cout << v[i];
            if (i != size - 1)
            {
                cout << ", ";
            }
        }
        cout << ")" << endl;
    }
    
    void disp()
    {
        cout << "(";
        for (typename vector<T>::iterator i = v.begin(); i != v.end(); ++i)
        {
            cout << *i;
            if ((i + 1) != v.end())
            {
                cout << ", ";
            }
        }
        cout << ")\n";
    }
};

int main()
{
    int n;
    cout << "Enter no of elements: ";
    cin >> n;

    Vec<int> v(n);

    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter value for element " << i + 1 << ": ";
        cin >> val;
        v.set(i, val);
    }
    
    v.display();

    int idx_to_modify;
    int new_val;
    cout << "Enter index to modify: ";
    cin >> idx_to_modify;
    cout << "Enter new value: ";
    cin >> new_val;
    
    v.modify(idx_to_modify - 1, new_val); 
    
    cout << "Modified vector: ";
    v.display();
    
    v.mult(2);
    
    cout << "Vector after multiplication: ";
    v.display();
    
    return 0;
}
