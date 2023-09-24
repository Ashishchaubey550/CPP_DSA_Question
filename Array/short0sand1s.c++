#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> array{1, 0, 1, 0, 1, 0, 1, 1, 0, 1};
    int start = 0;
    int end = array.size() - 1;
    int i = 0;
    while (start < end)
    {
        if (array[i] == 0)
        {
            swap(array[start], array[i]);
            i++;
            start++;
        }
        else
        {
            swap(array[i], array[end]);
            end--;
        }
    }
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}