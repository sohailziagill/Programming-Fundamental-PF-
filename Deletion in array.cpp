#include<iostream>
using namespace std;
void fill(int a[],int n)
{
 for(int i=0;i<n;i++)
 {
     cout<<"Enter the vlaue in index  "<<i+1<<"\t";
     cin>>a[i];
     
 }
    
}
void display (int a[],int num)
{
    
    for(int i=0;i<num;i++)
    {
        
        cout<<"\n\n "<<a[i];
    }
}
void edit(int a[],int & num,int pos)
{
 for(int i=pos;i<num;i++)
{

a[i]=a[i+1];
}num--;
}
int main()
{
    const int n=10;
    int pos;
    int a[n];
    fill(a,n);
    int num =n;
    cout<<"\n Enter the position at which you want to delete  a number ";
    cin>>pos;
    pos=pos-1;
    if(pos>=0 &&pos<n)//num and pos validity .
     edit(a,num,pos);
    
    else
    cout<<"\nInvalid data ";
   
    display(a,num);
    return 0;
}


