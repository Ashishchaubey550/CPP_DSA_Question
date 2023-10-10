#include <iostream>
#include <string.h>
using namespace std;
int getlength(char ch[])
{
    int length = 0;
    int i = 0;
    while (ch[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}
int main()
{
    char ch[100];
    cin.getline(ch, 100);
    cout << getlength(ch) << endl;
}