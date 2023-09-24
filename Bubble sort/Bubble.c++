#include <iostream>
using namespace std;
void bubble(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
        }
    }
}
void print(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
int main()
{
    int array[100] = {2, 8, 4, 5, 6, 9, 5, 4};
    bubble(array, 8);
    cout << "This is Your Sorted Array :- " << endl;
    print(array, 8);
}