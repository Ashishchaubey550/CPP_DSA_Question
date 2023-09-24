#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Ashish");
    s.push("Rahul");
    s.push("Roshan");
    cout << "Top Element => " << s.top() << endl;
    s.pop();
    cout << "Top Element => " << s.top() << endl;
}