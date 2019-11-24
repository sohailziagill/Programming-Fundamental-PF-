#include<iostream>
using namespace std;
void fill(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the value in  "<<i+1;
        cin>>array[i];
        
    }
}

int mysearch(int array[],int size,int& pos)
{
    int num;
    cout<<"\n Enter the number that you want to search ";
    cin>>num;
   for(int i=0;i<10;++i)
{
if(array[i]==num)
        {
 pos=i;
            break;
        }
       
}
    
    
}
int main()
{
    const int size=10;
    int array[size],pos=0;
    fill(array,size);
    mysearch(array,size,pos);
    
    if(pos!=0)
    cout<<"\n Number found in  "<<pos+1;
    else 
    cout<<"\n Not found ";
    
    return 0;
}