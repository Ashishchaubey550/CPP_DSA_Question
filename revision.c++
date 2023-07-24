#include <iostream>
using namespace std;
bool isPossible(int array[], int n, int m, int mid)
{
    int studentCount = 0;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum += array[i] <= mid)
        {
            pageSum += array[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || array[i] > mid)
            {
                return false;
            }
            pageSum = array[i];
        }
    }
    return true;
}
int book(int array[], int n, int m)
{
    int start = 0;
    int sum = 0;
    int ans = -1;
    for (int i = 0; i <= n; i++)
    {
        sum += array[i];
    }
    int end = sum;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (isPossible(array, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int array[5] = {12, 34, 67, 90};
    int n, m;
    cin >> n >> m;
    cout << book(array, n, m) << endl;
}