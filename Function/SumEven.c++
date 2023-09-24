#include <iostream>
using namespace std;
void Sumeven(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    cout << sum << endl;
}
int main()
{
    int n;
    cin >> n;
    Sumeven(n);
}