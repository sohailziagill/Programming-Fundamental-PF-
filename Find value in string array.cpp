#include<iostream>
using namespace std;
int main()
{
	char str[150]="My name is M Ali.I am 20 yrs old.I live in Islamabad street #143,G-9/1.";
	int i=0,x=0;
	char ts[5]="live";
	while(i!=150)
	{
		if(ts[x]==str[i])
		if(ts[x+1]==str[i+1])
		if(ts[x+2]==str[i+2])
		if(ts[x+3]==str[i]+3)
		if(ts[x+4]==str[i+4])
			cout<<"\n The value is found at "<<i+1;
		
i++;
	}
	
	cout<<endl;
	system("pause");
	return 0;
}
