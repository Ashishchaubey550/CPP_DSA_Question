#include <iostream>
using namespace std;
void rowsumprint(int array[3][3], int row, int col)
// row wise print
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + array[i][j];
        }
        cout << sum << endl;
    }
}
int main()
{
    int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int col = 3;
    rowsumprint(array, row, col);
}