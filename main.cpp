#include<iostream>
using namespace std;
int main()
{
    int no,k;
    cout<<"Please enter the no of locker ";
    cin>>no;
    for(int i=1;i<no;i++)
    {
        if(no%i==0)
        k=k+1;
    }
    if(k%2==0)
    cout<<"\nThe entered locker is  closed ";
    else
    cout<<"\n The entered locker is opened ";
    
    cout<<endl;
    return 0;
}