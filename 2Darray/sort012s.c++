#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums{
        1,
        0,
        1,
        2,
        0,
        1,
        0,
        1,
        2,
        1,
        0,
        1,
        2};
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;
    int i = 0;
    while (start < end)
    {
        if (nums[i] == 0)
        {
            swap(nums[start], nums[i]);
            start++;
            i++;
        }
        else if (nums[i] == 1)
        {
            swap(nums[i], nums[end]);
            end--;
        }
        else if (nums[i] == 2)
        {
            swap(nums[i], nums[mid]);
            mid++;
        }
        i++;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}