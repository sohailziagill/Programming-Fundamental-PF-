#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double m,v,d;
    cout<<"Enter the mass in grams and density in mass per volume  ";
    cin>>m>>d;
    v=m/d;
    cout<<"\nThe density is "<<setprecision(3)<<v;
    
    return 0;
}