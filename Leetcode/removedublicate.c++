#include <iostream>
using namespace std;
int removedublicate(int array[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1 && array[i] == array[i + 1])
        {
            continue;
        }
        else
        {
            array[count] = array[i];
            count++;
        }
    }
    return count;
}
int main()
{
    int array[100] = {1, 1, 2};
    int solve = removedublicate(array, 3);
    cout << solve << endl;
}