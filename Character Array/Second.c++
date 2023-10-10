#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char ch[100];
    int n = 100;
    cin >> ch;
    int count = 0;
    for (int i = 0; i < 100; i++)
    {
        count += i;
    }
    cout << count << endl;
    return 0;
}