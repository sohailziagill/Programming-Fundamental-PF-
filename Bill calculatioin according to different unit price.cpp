#include<iostream>
using namespace std;
int main()
{
cout<<"\n**************************************************************************";
cout<<"\nProgrammer :  Sohail Zia Gill.";
cout<<"\nTitle: Electric Bill Calculation according to diffrent unit prices.";
cout<<"\nCompiler : Visual Studio 17";
cout<<"\nDated : 27/Oct/17";
cout<<"\nCompiling date : 27/Oct/17";
cout<<"\nIslamic International University Islamabad.";
cout<<"\n***************************************************************************";
	char type;
	int minuts,time;
double bill;
	cout<<"Enter your account number\n                       ";
	cout<<"Enter the service code in capital letter          ";
	cin>>type;
	cout<<"The number of minuts thar you are used            ";
	cin>>minuts;
	cout<<"Enter the time when you used                      ";
	cin>>time;
	if(type=='P'&&type=='R')

	{
		if(type=='R')
		{
			if(time<=50)
				bill=50;
		
			else
			{
				time=time-50;
				bill=50+0.20*time;
			}
		}
		else
		
		
			bill=25;


	}
	
	else
		cout<<" An invalid service code";
	system("pause");
	cout<<"Your bill is "<<bill;
	return 0;
}
