#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack : ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl; // Added for cleaner output
    
    return 0; // Added return statement
}

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Queue : ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl; // Added for cleaner output
    
    return 0; // Added return statement
}
