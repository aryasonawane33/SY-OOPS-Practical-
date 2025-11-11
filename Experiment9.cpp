#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream in("First.txt", ios::in);
    ofstream out("Second.txt", ios::out);
    string s;

    while (getline(in, s))
    {
        out << s << "\n";
    }

    in.close();
    out.close();
    return 0;
}

#include <iostream>
#include <fstream>
#include <cctype> // Required for isdigit()
using namespace std;

int main()
{
    ifstream f("First.txt");
    char ch;
    int d = 0, sp = 0;

    while (f.get(ch))
    {
        if (isdigit(ch))
        {
            d++;
        }
        if (ch == ' ')
        {
            sp++;
        }
    }

    cout << "Digits " << d << " Spaces " << sp;
    f.close();
    return 0;
}

#include <iostream>
#include <fstream>
#include <sstream> // Required for stringstream
#include <string>
using namespace std;

int main()
{
    ifstream f("First.txt");
    string s, w;
    int c = 0;

    while (getline(f, s)) // Read line into string s
    {
        stringstream ss(s); // Use stringstream to handle words in the line
        while (ss >> w) // Extract words from the stringstream
        {
            c++;
        }
    }

    f.close();
    cout << "Words = " << c;
    return 0;
}

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    ifstream f("First.txt");
    string s, w, t;
    int c = 0;

    cout << "Enter the word: ";
    cin >> t; // t holds the target word

    while (getline(f, s)) // Read line into string s
    {
        stringstream ss(s);
        while (ss >> w) // Extract words from the stringstream into w
        {
            if (w == t)
            {
                c++;
            }
        }
    }

    f.close();
    cout << "Occurrences = " << c;
    return 0;
}

