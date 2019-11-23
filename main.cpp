#include<iostream>
using namespace std;
int main ()
{
    int num,dig=0,sum=0,sign=1;
    cout<<"Enter the number that you want to check  ";
    cin>>num;
    if(num>0)
    {
        while(num!=0)
        {
           dig=num%10;
          num=num/10;
          sum=sum+sign*dig;
          sign=sign*(-1);
        }
        if(sum%11==0)
        cout<<"\nThis number can divide by 11";
        else
        cout<<"\n This cannot divide by 11";
    }
    else
    cout<<"You are entered a negative number";
    cout<<endl;
    return 0;
}