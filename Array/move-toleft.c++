#include <iostream>
#include <vector>
using namespace std;
void negtiveNumber(vector<int> &array, int row)
{
    int start = 0;
    int end = array.size() - 1;
    int i = 0;
    while (start < end)
    {
        if (array[i] < 0)
        {
            swap(array[i], array[start]);
            i++;
            start++;
        }
        else
        {
            swap(array[i], array[end]);
            end--;
        }
    }
};
int main()
{
    vector<int> array{
        -1,
        2,
        -3,
        4,
        -5,
        6,
        0,
        -5,
        34,
        -7};
    int row = array.size();
    negtiveNumber(array, row);
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << endl;
    }
}
