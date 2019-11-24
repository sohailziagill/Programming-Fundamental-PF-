#include<iostream>
using namespace std;

void getdata(int list[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"\n Enter data in index  "<<i+1;
        cin>>list[i];
    }
    
}
void largest(int list[],int size,int& max,int& pos,int& sum)
{
    max=list[0];
    for(int i=0;i<size;i++)
    {
        if(max<list[i])
        {
        max=list[i];
            pos=i+1;
        }
       sum=sum+list[i]; 
    }
    
}

int main()
{
    const int size=10;
    int list[size],max=0,pos,sum=0;
    double avg=0;
    getdata(list,size);
    largest(list,size,max,pos,sum);
    cout<<"\n The largest number is "<<max;
    cout<<"\n The largest number position is  "<<pos;
    cout<<"\n The sum is  "<<sum;
    cout<<"\n The average is "<<sum/10;
    return 0;
    
}
