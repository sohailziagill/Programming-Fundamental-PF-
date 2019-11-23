#include<iostream>
using namespace std;
int main()
{
cout<<"\n**************************************************************************";
cout<<"\nProgrammer :  Sohail Zia Gill.";
cout<<"\nTitle: Find the multiple numbers sum and average with while loop and input will be stored in single variable.";
cout<<"\nCompiler : Visual Studio 16";
cout<<"\nDated : 07/Oct/17";
cout<<"\nCompiling date : 07/Oct/17";
cout<<"\nIslamic International University Islamabad.";
cout<<"\n***************************************************************************";
int num=0,count=0,sum=0;
double avg;
const float sv=-9999;
while(num!=sv)
{
	cout<<"Please enter the number";
	cin>>num;
	if(num!=sv)
	{
		sum=sum+num;
		count++;
		avg =static_cast <float>(num)/count;

	cout<<"Average is "<<avg<<endl;
	cout<<"Sum is "<<sum<<endl;}
}

system("pause");
return 0;
}
