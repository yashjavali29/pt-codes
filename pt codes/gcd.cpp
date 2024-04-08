#include<iostream>
using namespace std;
int main()
{
    int m,n,r;
    cout<<"Enter the value of m: ";
    cin>>m;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    while(n!=0){
        r=m%n;
        m=n;
        n=r;
    }
    cout<<"The GCD OF THE GIVEN TWO NUMBERS IS :" << m <<endl;
    return 0;
}
