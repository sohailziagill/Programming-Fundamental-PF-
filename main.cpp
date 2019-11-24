#include<iostream>
using namespace std;
int main()
{
    const int size=5;
    int sum=0;
    int array[size];
    for(int i=0;i<5;i++)
    {
        cout<<"\n Enter the value in "<<i+1;
        cin>>array[i];
        sum=sum+array[i];
        }
        
        
        cout<<"\n The sum is "<<sum;
        cout<<"\n The average is "<<sum/5;
for(int i=4;i>=0;i--)
    {
        cout<<"\n "<<array[i];
    }
    return 0;
}