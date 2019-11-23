#include<iostream>
using namespace std;
int main()
{
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
