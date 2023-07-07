#include<iostream>
using namespace std;
int sumof(int array[] , int n){
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = array[i] + sum ;
        }
        return sum ;
}
int main(){
    int n ;
    cin>>n;
    int array[100];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    cout<<sumof(array,n)<<endl;
}