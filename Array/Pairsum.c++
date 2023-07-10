#include<iostream>
using namespace std;
int pairsum(int array[] , int n , int s){
    int ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (array[i]+array[j]==s)
            {
                int temp;
                cout<<max(array[i], array[j])<<" "<<min(array[i], array[j])<<endl;
                ans = temp;
            }            
        }
        
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int array[1000];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int s;
    cin>>s;
    cout<<pairsum(array,n,s)<<endl;
}