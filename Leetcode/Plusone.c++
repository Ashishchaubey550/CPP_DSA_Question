#include <iostream>
using namespace std;
int plusone(int array[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (array[i] < 9)
        {
            array[i]++;
            return array;
        }
        array[i] = 0;
    }
    int newNumber[] = new int[n + 1];
    newNumber[0] = 1;
    return newNumber;
}
int main()
{
    int array[100] = {1, 2, 3};
    int n = 3;
    int solve = plusone(array, n);
}