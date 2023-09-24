#include <iostream>
using namespace std;
void add(int n, int m)
{
    int sum = n + m;
    cout << sum << endl;
}
int main()
{
    cout << " Enter two Number => " << endl;
    int Num1, Num2;
    cin >> Num1 >> Num2;
    add(Num1, Num2);
    cout << &add << endl;  // address of add function
    cout << &Num1 << endl; // addres of Num1
}