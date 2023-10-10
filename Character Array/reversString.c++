#include <iostream>
#include <string.h>
using namespace std;
void reverseString(char ch[])
{
    int i = 0;
    int n = strlen(ch);
    int j = n - 1;
    while (i <= j)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}
int main()
{
    char ch[100];
    cin >> ch;
    reverseString(ch);
    cout << ch << endl;
}