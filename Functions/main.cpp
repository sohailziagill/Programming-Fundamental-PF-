#include<iostream>
#include<cmath>
using namespace std;
void mean(int x,int x1,int x2,int x3,int x4,int x5,int& m )
{
      m=(x1+x2+x3+x4+x5)/5;
}
void sd(int x,int x1,int x2,int x3,int x4,int x5,int& s )
{
     s=sqrt(pow(x1-x,2)+pow(x2-x,2)+pow(x3-x,2)+pow(x4-x,2)+pow(x5-x,2));
}
int main()
{
    int x1,x2,x3,x4,x5,x,m,s;
    cout<<"Enter the value of x and x1 and x2 and x3and x4 and x5  ";
    cin>>x>>x1>>x2>>x3>>x4>>x5;
 mean( x, x1, x2, x3,x4,x5, m );
   sd( x, x1, x2, x3,x4,x5, s );
   
   cout<<"\nThe mean  is  "<<m;
   cout<<"\n The standerd daviation is "<<s;
    
    return 0;
}