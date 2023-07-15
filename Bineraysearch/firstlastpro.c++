#include<iostream>
using namespace std;
int left(int array[] , int n , int key){
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start + (end - start)/2;
    while (start<=end)
    {
        if (array[mid] == key)
        {
            ans = mid;
            end = mid-1;
        }else if (key>array[mid])
        {
            start = mid+1;
        }else if(key<array[mid]) {
            end = mid - 1;
        }
        
        mid = start + (end - start)/2;
    }
    return ans;
}
int right(int array[] , int n , int key){
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start + (end - start)/2;
    while (start<=end)
    {
        if (array[mid] == key)
        {
            ans = mid;
            start = mid+1;
        }else if (key>array[mid])
        {
            start = mid+1;
        }else if (key<array[mid]){
            end = mid - 1;
        }
        
        mid = start + (end - start)/2;
    }
    return ans;
}
int main(){
    int array[6] = {1,2,3,4,4,4};
    int key;
    cin>>key;
    cout<<left(array,6,key)<<endl;
    cout<<right(array,6,key)<<endl;
}

