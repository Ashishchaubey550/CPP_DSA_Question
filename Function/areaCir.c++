#include <iostream>
using namespace std;
float Area(float r)
{
    float circleArea = 3.14 * r * r;
    return circleArea;
}
int main()
{
    float r;
    cin >> r;
    cout << Area(r) << endl;
}