#include<iostream>
#include<math.h>
#include <climits>
using namespace std;
int getmin(int array[], int n){
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (array[i]<min)
        {
            min = array[i];
        }
    }
    return min;
}
int getmax(int array[], int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (array[i]>max)
        {
            max = array[i];
        }
    }
    return max;
}
int main(){
    int n = 10;
    int array[10];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    cout<<"Maximum Value is:- "<<endl;
    cout<<getmax(array,n)<<endl;
    cout<<"Minimum Value is:- "<<endl;
    cout<<getmin(array,n)<<endl;
}