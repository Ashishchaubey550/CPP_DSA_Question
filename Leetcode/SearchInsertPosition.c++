#include <iostream>
using namespace std;
int search(int array[], int target, int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (array[mid] == target)
        {
            return mid;
        }
        if (array[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    int array[100] = {1, 3, 5, 6};
    int target = 7;
    int n = 4;
    int solve = search(array, target, n);
    cout << solve << endl;
}