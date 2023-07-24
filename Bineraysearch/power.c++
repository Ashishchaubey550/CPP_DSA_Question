#include<iostream>
using namespace std;
long long int sqrt(int x){
    int start = 0;
    int end = x;
    long long int mid = start + (end - start)/2;
    int ans = -1;
    while (start<=end)
    {
        long long int square = mid * mid;
        if (square==x)
        {
            return mid;
        }else if (square<x)
        {
            ans = mid ;
            start = mid + 1;
        }else if (square>x)
        {
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return  ans;
}
double mypow(int n , int p , int tempsol){
    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i < p; i++)
    {
        factor = factor/10;
        for (double j = ans; j*j <n ; j = j+factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int tempsol= sqrt(n);
    cout<<mypow(n,3,tempsol);
}