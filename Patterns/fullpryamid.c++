#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int j = 0; j < n - row - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < row + 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}