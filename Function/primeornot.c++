#include <iostream>
using namespace std;
bool primeNot(int n)
{
    int i = 2;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    bool isPrime = primeNot(n);
    if (isPrime)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }
}