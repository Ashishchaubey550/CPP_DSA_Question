#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    l.erase(l.begin());
    for (int i : l)
    {
        cout << i << " ";
    }
    // Baki sab stl same hai sab data struture ke liye
}