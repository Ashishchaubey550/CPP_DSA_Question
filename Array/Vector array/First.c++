#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> array;
    // array.push_back(2);
    // array.push_back(4);
    // cout << array.size() << endl;
    // cout << array.capacity() << endl;
    // array.pop_back();
    // cout << "Your array" << endl;
    // for (int i = 0; i < array.size(); i++)
    // {
    //     cout << array[i] << " ";
    // }

    //***************************Dynamic array*****************

    int n;
    cout << "Number of element you want" << endl;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < array.size(); i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << " ";
    }
}