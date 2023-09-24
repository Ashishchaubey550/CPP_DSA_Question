#include <iostream>
using namespace std;
int main()
{
    for (int row = 0; row < 6; row = row + 1)
    {
        if (row == 0 || row == 6)
        {
            for (int col = 0; col < 6; col = col + 1)
            {
                cout << " * ";
            }
        }
        else
        {
            cout << " * ";
        }
        cout << " ";
        cout << endl;
    }
}