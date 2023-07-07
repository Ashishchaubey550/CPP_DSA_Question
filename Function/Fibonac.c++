#include<iostream>
using namespace std;
int fibonaic(int n){
    int a = 0;
    int b = 1;
    int nextnumber;
    cout<<a<<endl<<b<<endl;
    for (int i = 0; i <= n; i++)
    {
        nextnumber = a + b;
        a = b;
        b = nextnumber;

        cout<<nextnumber<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    fibonaic(n);
    return 0;
}