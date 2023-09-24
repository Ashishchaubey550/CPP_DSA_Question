#include <iostream>
using namespace std;
bool prime(int n)
{
    int i = 2;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        bool isiprime = prime(i);
        if (isiprime)
        {
            cout << i << " ";
        }
    }
}