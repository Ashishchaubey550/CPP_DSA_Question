#include <iostream>
using namespace std;
void even(int n)
{
    if (n % 2 == 0)
    {
        cout << "You Entered A Even Number " << n << endl;
    }
    else
    {
        cout << "You Entered A Odd Number " << n << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    even(n);
}