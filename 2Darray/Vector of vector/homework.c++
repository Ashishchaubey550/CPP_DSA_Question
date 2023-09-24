#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> array(5, vector<int>(5, -8));
    for (int i = 0; i < array.size(); i++)
    {
        for (int j = 0; j < array[i].size(); j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}