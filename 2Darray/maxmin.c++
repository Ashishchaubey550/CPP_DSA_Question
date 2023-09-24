#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
int findmin(int array[3][3], int row, int col)
{
    int n = INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] < n)
            {
                n = array[i][j];
            }
        }
    }
    return n;
}
int findmax(int array[3][3], int row, int col)
{
    int m = INT_MIN;
    // int n = INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] > m)
            {
                m = array[i][j];
            }
        }
    }
    return m;
}
int main()
{
    int array[3][3] = {{0, 2, 3}, {4, 5, 6}, {7, 8, 19}};
    int row = 3;
    int col = 3;
    // print array for more transparence
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Maximum Value Present in the array is :- " << findmax(array, row, col) << endl;
    cout << "Minimum Value Present in the array is :- " << findmin(array, row, col) << endl;
}