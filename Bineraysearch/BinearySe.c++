#include<iostream>
using namespace std;
int bN(int array[] , int n , int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while (start <= end)
    {
        if (array[mid] == key)
        {
            return mid;
        }
        if (key>array[mid])
        {
            start = mid + 1;
        }else {
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int main(){
    int array[6] = {1,5,8,9,10,11};
    cout<<"Enter Your Key "<<endl;
    int key;
    cin>>key;
    cout<<"Index of "<<key<<" is :- ";
    cout<<bN(array,6,key)<<endl;
}