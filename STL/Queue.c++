#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("Ashish");
    q.push("Rahul");
    q.push("Saurabh");
    cout << "Size Before pop wla => " << q.size() << endl;
    cout << "Front Element=> " << q.front() << endl;
    q.pop();
    cout << "Front Element=> " << q.front() << endl;
    cout << "Size Before pop wla => " << q.size() << endl;
}