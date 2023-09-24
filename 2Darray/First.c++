#include <iostream>
using namespace std;
int main()
{
    // declaration of 2D array
    int array[3][3];

    // initialization of 2D array
    int arra[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << arra[1][3] << endl;

    // printing row-wise  2D array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arra[i][j] << " ";
        }
        cout << endl;
    }
    cout << "column - wise" << endl;
    // printing column-wise 2D array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arra[j][i] << " ";
        }
        cout << endl;
    }
}