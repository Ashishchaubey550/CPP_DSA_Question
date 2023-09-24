#include <iostream>
#include <vector>
using namespace std;
int binearySearch(vector<int> array, int target)
{
    int start = 0;
    int end = array.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (array[mid] == target)
        {
            return mid;
        }
        if (mid - 1 >= 0 && array[mid - 1] == target) // mid - >=0  mtlb mid - 1 zero rhega tabhi check karung
        {
            return mid - 1;
        }
        if (mid + 1 < array.size() && array[mid + 1] == target) // mid+1 hoskta hai bound se bhr chla jye isiliyr mid+1 hamesha array ki size se chota rhe tabhi check hoga
        {
            return mid + 1;
        }
        if (target > array[mid])
        {
            start = mid + 2; // 2step kuki phle mid ke side wla check karliye hai
        }
        else
        {
            end = mid - 2;
        }
        mid = start + (end - start) / 2;
    }
    return -1; // not found case
}
int main()
{
    vector<int> array = {10, 3, 40, 20, 50, 80, 70};
    int target;
    cin >> target;
    int ans = binearySearch(array, target);
    cout << "Index of " << target << " is " << ans << endl;
}