#include<iostream>
using namespace std;
 double larger(int y,int z)
{

    if(y>z)
    return y;
    else
    return z;
    
}
    double compare(double x,double y,double z)
    {
        if(x>larger(y,z))
        return x;
        else
        return larger(y,z);
        
        
    }
int main()
{
	int x,y,z;
    cout<<"Enter the three numbers  ";
    cin>>x>>y>>z;
    cout<<"\n The larger is   "<< compare(x,y,z);
	cout<<endl;
    return 0;
}
