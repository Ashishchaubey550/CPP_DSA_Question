#include <iostream>
using namespace std;
void rowsumprint(int array[3][3], int row, int col)
// coloumn wise print
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + array[j][i];
        }
        cout << sum << endl;
    }
}
int main()
{
    int array[3][3] = {{1, 2, 3}, {5, 6, 0}, {7, 8, 7}};
    int row = 3;
    int col = 3;
    rowsumprint(array, row, col);
}