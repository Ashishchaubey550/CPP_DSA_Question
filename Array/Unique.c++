#include <iostream>
#include <vector>
using namespace std;
bool finduniqe(vector<int> array)
{
    int answer = 0;
    for (int i = 0; i < array.size(); i++)
    {
        answer = answer ^ array[i];
    }
    return answer;
}
int main()
{
    int n;
    cin >> n;
    vector<int> array(n);
    cout << "Enter Number of Element you want" << endl;
    for (int i = 0; i < array.size(); i++)
    {
        cin >> array[i];
    }
    if (finduniqe)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}