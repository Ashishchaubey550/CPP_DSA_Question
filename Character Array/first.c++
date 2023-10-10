#include <iostream>
using namespace std;
int main()
{
    char Name[3];
    //***********************direct sare sequence of char input leliya**
    // cout << "Enter Your Name ";
    // cin >> ch;
    // cout << ch << endl;

    //******************single single char ko input mei lena hai
    // ch[0] = 'a';
    // ch[1] = 'b';
    // cin >> ch[2];
    // cout << ch[2] << endl;
    // cin >> Name;
    // for (int i = 0; i < 7; i++)
    // {
    //     cout << "index " << i << "valau: " << Name[i] << endl;
    // }
    // int value = (int)Name[6];
    // cout << value << endl;
    cin >> Name;
    for (int i = 0; i <= 4; i++)
    {
        cout << "Index " << i << "value: " << Name[i] << endl;
    }
    return 0;
}