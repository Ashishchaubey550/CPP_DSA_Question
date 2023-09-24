#include <iostream>
using namespace std;
void grade(int n)
{
    if (n >= 90)
    {
        cout << "Your Grade is A " << endl;
    }
    else if (n >= 80)
    {
        cout << "Your Grade is B " << endl;
    }
    else if (n >= 70)
    {
        cout << "Your Grade is C " << endl;
    }
    else if (n >= 60)
    {
        cout << "Your Grade is D " << endl;
    }
    else
    {
        cout << "Your Grade is E " << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    grade(n);
}