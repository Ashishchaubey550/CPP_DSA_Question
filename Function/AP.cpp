#include<iostream>
using namespace std;
int pro(int n){
    int ap = 0;
    for (int i = 1; i <= n; i++)
    {
        ap = 3*n+7;
    }
    return ap;
}
int main(){
    int n;
    cin>>n;
    int answer = pro(n);
    cout<<answer<<endl;
    
    return 0;
}