#include<iostream>
using namespace std;
int main()
{
    int n;
    int sign =-1;
    double sum=1;
    cout<<"Enter the  value of n  ";
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        
        sum=sum+sign*(1/(2*i+1));
        
        sign=sign*-1;
    }
    sum=4*sum;
    cout<<"\n The value of PI is "<<sum;
    
    return 0;
}