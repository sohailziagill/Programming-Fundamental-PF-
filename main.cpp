#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
    
  float w,p;
    cout<<"Enter the weight in KG  ";
    cin>>w;
    p=w*2.2;
    cout<<"\n The wieght in pound is "<<setprecision(4)<<p<<"   the wieght in KG "<<w;
    
    
    return 0;
}