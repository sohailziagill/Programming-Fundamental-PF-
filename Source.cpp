#include<iostream>
using namespace std;
int main()
{
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