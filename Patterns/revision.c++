#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    int sum = 0;
    while (i<=n)
    {
        if (i%2==0)
        {
            sum = sum + i;
            cout<<i<<endl;
        }
        i = i + 1;
    }
    cout<<sum<<endl;
    return 0;
}