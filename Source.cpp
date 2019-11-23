#include<iostream>
using namespace std;
int numpelidron(int num)
{ int n=num;
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
