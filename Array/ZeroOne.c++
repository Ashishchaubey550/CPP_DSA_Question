#include <iostream>
using namespace std;
int main()
{
    int array[10] = {1, 0, 1, 1, 0, 1, 0, 1, 0, 1};
    int size = 10;
    int numZero = 0;
    int numOnwe = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == 1)
        {
            numZero++;
        }
        else if (array[i] == 0)
        {
            numOnwe++;
        }
    }
    cout << numZero << endl;
    cout << numOnwe << endl;
}