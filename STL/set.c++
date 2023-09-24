#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(4);
    s.insert(5);
    s.insert(3);
    s.insert(3);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    for (int i : s)
    {
        cout << i << endl;
    }
    cout << "After => " << endl;
    s.erase(s.begin());
    for (int i : s)
    {
        cout << i << endl;
    }
    cout << "2 present hai ki nhi => " << s.count(2) << endl;
    set<int>::iterator itr = s.find(4);
}