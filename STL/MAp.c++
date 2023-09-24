#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "Ashish";
    m[170] = "Ankit";
    m[21] = "Prabhat";
    m.insert({5, "Goli"});
    m.erase(5);
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "-21 Present hai => " << m.count(-21) << endl;
}