#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a(5, 1);
    vector<int> v;
    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(1);
    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity -> " << v.capacity() << endl;
    int size = v.size();
    cout << "size " << v.size() << endl;
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << endl;
    }
    v.pop_back();
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << endl;
    }
    v.clear();
    cout << "size " << v.size() << endl;
    cout << "Capacity -> " << v.capacity() << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }
    vector<int> last(a);
    for (int i = 0; i < 5; i++)
    {
        cout << last[i] << endl;
    }
}