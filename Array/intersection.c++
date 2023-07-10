#include<iostream>
using namespace std;
// int intersectionwala(int n , int m , int array1[] , int array2[]){
//     int ans;
//     int elementl;
//     int o;
//     for (int i = 0; i < n; i++)
//     {
//         elementl = array1[i];
//     }
//     for (int j = 0; j < m; j++)
//     {
//         if (elementl<array2[j])
//         {
//             break;
//         }
        
//         if (elementl == array2[j])
//         {
//             ans = elementl;
//             array2[j]=o;
//             break;
//         }
        
//     }
//     return ans;
// }
int inter(int n, int m , int array1[] , int array2[] ){
    int i = 0 , int j = 0;
    int ans;
    while (i<n && j<m)
    {
        if (array1[i]==array2[j])
        {
            ans = array1[i];
            i++;
            j++;
        }else if (array1[i]<array2[j])
        {
            i++;
        }else{
            j++;
        }
        
    }
    return ans;
}
int main(){
    cout<<"Enter How many number of array you want ?"<<endl;
    int n,m;
    cin>>n>>m;
    cout<<"Enter numbers in array :- "<<endl;
    int array1[100];
    int array2[100];
    for (int i = 0; i < n; i++)
    {
        cin>>array1[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin>>array2[j];
    }
    cout<<"Both Arrays are intersecting each other at :-  ";
    cout<<inter(n,m,array1,array2);
}

//********************************************more effientive ********************************//
