#include <iostream>
using namespace std;
// function for transpose***
void traspose(int array[3][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            swap(array[i][j], array[j][i]);
        }
    }
}
// function for print*****
void print(int array[3][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int col = 3;
    print(array, row, col);    // print without transpose
    traspose(array, row, col); // calling transposefunction
    cout << "Printing Array after transpose :-" << endl;
    print(array, row, col); // printing after transpose
}