// Left rotate array by one element

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> array{1, 2, 3, 4, 5};
    cout << "chlrha hai" << endl;
    int start = array.size() - 1;
    int end = array.size() - 2;
    while (start > 0)
    {
        swap(array[start], array[end]);
        start--;
        end--;
    }
    for (auto vale : array)
    {
        cout << vale << endl;
    }
}