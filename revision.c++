#include<iostream>
using namespace std;
bool find(int n , int array[] , int key){
    for (int i = 0; i < n; i++)
    {
        if (array[i]==key)
        {
            return 1;
        }
    }
    return 0;
}
int main(){
    cout<<" How many number you wnat to give:- ";
    int n;
    cin>>n;
    cout<<" Type "<< n <<" numbers:- "<<endl; 
    int array[500];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    cout<< "Enter a key you want to find :- ";
    int key;
    cin>>key;
    int found;
    found = find(n,array,key);
    if (found)
    {
        cout<<" Your key is Found:- "<<key<<endl;
    } else {
        cout<<" Your key is not Found:- "<<key<<endl;
    }
    return 0;
}