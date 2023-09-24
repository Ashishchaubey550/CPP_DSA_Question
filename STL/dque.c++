#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    int size = d.size();
    for (int i = 0; i < size; i++)
    {
        cout << d[i] << endl;
    }
    d.pop_back();
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << d[i] << endl;
    }
    d.erase(d.begin(), d.begin() + 1);
    cout << "Print the erased data" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << d[i] << endl;
    }
}