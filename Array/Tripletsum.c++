#include <iostream>
#include <vector>
using namespace std;
vector<int> pairsum(vector<int> nums, int sum)
{
    vector<int> result;
    for (size_t i = 0; i < nums.size(); i++)
    {
        int element = nums[i];
        for (int j = i + 1; j < nums.size(); j++)
        {
            int element2 = nums[j];
            for (int k = j + 1; k < nums.size(); k++)
            {
                if (nums[i] + nums[j] + nums[k] == sum)
                {
                    result.push_back(i);
                    result.push_back(j);
                    result.push_back(k);
                    return result;
                }
            }
        }
    }
    return result;
}
int main()
{
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < array.size(); i++)
    {
        cin >> array[i];
    }
    cout << "Enter Your Target Sum ";
    int sum;
    cin >> sum;
    vector<int> answer = pairsum(array, sum);
    if (answer.size() == 3)
    {
        cout << "(" << array[answer[0]] << "," << array[answer[1]] << "," << array[answer[2]] << ","
             << ")" << endl;
    }
    else
    {
        cout << endl;
    }
}
