#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> array(5, vector<int>(3, 79)); // decleartion of vector of vector
    for (int i = 0; i < array.size(); i++)
    {
        for (int j = 0; j < array[i].size(); j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}