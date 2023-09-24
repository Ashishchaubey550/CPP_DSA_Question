#include <iostream>
using namespace std;
bool liner(int array[3][3], int row, int col, int key)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int col = 3;

    // only printing the array......!
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Search Your Key " << endl;
    int key;
    cin >> key;
    int print = liner(array, row, col, key);
    if (print)
    {
        cout << "Your Key is Present" << endl;
    }
    else
    {
        cout << "Your Key is Not Present" << endl;
    }
}