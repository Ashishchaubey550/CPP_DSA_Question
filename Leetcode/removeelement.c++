#include <iostream>
using namespace std;
int dublicateElement(int arr[], int val, int n)
{

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < n && arr[i] == val)
        {
            continue;
        }
        else
        {
            arr[count] = arr[i];
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[100] = {3, 2, 2, 3};
    int val = 3;
    int solve = dublicateElement(arr, val, 4);
    cout << solve << endl;
}