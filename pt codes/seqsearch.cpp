#include<iostream>
using namespace std;
int main()
{
    int a[100],key,n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Pls enter the array elements: ";
    int i;
    for (i=0;i<n;i++)
    cin>>a[i];  

    
    cout<<"Enter the search key : ";
    cin>>key;
    for(i=0;i<a[i];i++)
    if (a[i]==key) {
    cout<<"The key is found in position : "<< i<<endl;
}
}
