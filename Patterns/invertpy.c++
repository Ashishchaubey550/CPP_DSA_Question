#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < n - row; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}