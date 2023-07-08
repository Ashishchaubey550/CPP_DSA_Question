#include<iostream>
using namespace std;
void printarr(int array[] , int n){
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<endl;
    }
    
}
void swapalternate(int array[] , int n){
    for (int i = 0; i < n; i+=2)
    {
        if (i+1<n)
        {
            swap(array[i] , array[i+1]);
        }
        
    }
    
}
int main(){
    int n;
    cin>>n;
    int array[100];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    swapalternate(array,n);
    printarr(array,n);
    return 0;
}