#include<iostream>
using namespace std;
int numpelidron(int num)
{ 
cout<<"\n**************************************************************************";
cout<<"\nProgrammer :  Sohail Zia Gill.";
cout<<"\nTitle: Pelidron number.";
cout<<"\nCompiler : Visual Studio 19";
cout<<"\nDated : 4/Mar/19";
cout<<"\nCompiling date : 9/Mar/19";
cout<<"\nIslamic International University Islamabad.";
cout<<"\n***************************************************************************";
	int n=num;
	int dig,comp=0;
	while(num!=0)
	{
dig=num%10;
num=num/10;
comp=comp*10+dig;

	}
	cout<<"\n The inverse number is "<<comp;

if(n==comp)
	cout<<"\n This number is a pelidron \n";
else
	cout<<"\n This number is not a pelidron number\n";
}


int main()
{
	int num,dig;
	cout<<"Enter the  number ";
	cin>>num;
	numpelidron(num);
	system ("pause");
return 0;
}
