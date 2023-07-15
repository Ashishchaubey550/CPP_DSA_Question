#include<iostream>
using namespace std;
int pivot(int array[] , int n){
    int start = 0;
    int end = n-1;
    int mid = start + ( end- start)/2;
    while (start<end)
    {
        if (array[mid]>=array[0])
        {
            start = mid + 1;
        }else {
            end = mid ;
        }
        mid = start + (end - start)/2;
    }
    return start;
}
int main(){
    int array[8] = {7 , 8 , 9 , 1, 2,3 };
    cout<<pivot(array,8)<<endl;
}