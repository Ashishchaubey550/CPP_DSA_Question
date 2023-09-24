#include <iostream>
using namespace std;
void maxi(int a, int b, int c)
{
    if (a > b && a > c)
    {
        cout << " a is greater Number " << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << " B is Greater Number " << b << endl;
    }
    else
    {
        cout << "C is greater Number " << c << endl;
    }
}
int main()
{
    cout << "Enter Three Number " << endl;
    int a, b, c;
    cin >> a >> b >> c;
    maxi(a, b, c);
}