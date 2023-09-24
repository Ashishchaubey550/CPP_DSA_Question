#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 4> a = {1, 2, 3, 4};
    cout << "Size of the Array :- " << endl;
    int size = a.size();
    cout << a.size() << endl;
    cout << "Your sorted Array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
    cout << "Position of the element :- " << a.at(2) << endl;
    cout << "to check array empty or not :- " << a.empty() << endl;
    return 0;
}