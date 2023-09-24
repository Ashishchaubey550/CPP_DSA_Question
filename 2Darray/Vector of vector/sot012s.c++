#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> array;
    vector<int> a{1, 0, 2};
    vector<int> c{0, 1, 2};
    vector<int> b{1, 2, 0};
    array.push_back(a);
    array.push_back(b);
    array.push_back(c);
    int start = array.size();
    int end = array.size() - 1;
    int mid = start + (end - start / 2);
    int i = 0;
    while (start < end)
    {
        if (array[i] < 0)
        {
            /* code */
        }
        }
}