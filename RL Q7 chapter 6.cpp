#include<iostream>
using namespace std;
class angle
{
        int deg;
		double mint;
		char dir;
  public:
  	angle():deg(0), mint(0), dir(0)	//no-argument constructor
			{	}
		//	angle(int deg, float mint, char dir):degrees(deg), minutes(mint), direction(dir)	//three arguments constructor
		//	{	}
		void  putangle();
		void dispangle() const;	
	
};
void angle::putangle()
{
	cout<<"\nEnter the degrees    ";
	cin>>deg;
	cout<<"\n Enter the minutes    ";
	cin>>mint;
	cout<<"\n Enter the direction (N,S,E,W)";
	cin>>dir;
	
}
void angle::dispangle() const
{
	cout <<"\nAngle: " <<deg <<"\xF8 " <<mint <<"\' " <<dir;

}
int main()
{
	char op='y';
	angle angle1;
	angle1.dispangle();
while(op=='y'||op=='Y')
{

 angle1.putangle();
 angle1.dispangle();
cout<<"\n Do you want to enter another angle if yes Enter 'y'other wise 'n'   ";
cin>>op;
}

	
	cout<<endl;
	system ("pause");
	return 0;
}
