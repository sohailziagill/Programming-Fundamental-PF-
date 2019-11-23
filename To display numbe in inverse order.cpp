#include<iostream>
using namespace std;
int main()
{
cout<<"\n**************************************************************************";
cout<<"\nProgrammer :  Sohail Zia Gill.";
cout<<"\nTitle: Display the number in inverse order.";
cout<<"\nCompiler : Visual Studio 19";
cout<<"\nDated : 20/Feb/19";
cout<<"\nCompiling date : 25/Feb/19";
cout<<"\nIslamic International University Islamabad.";
cout<<"\n***************************************************************************";
	int num,dig;
	cout<<"Please enter  the number/t";
	cin>>num;
	if(num>0)
	{
		while(num!=0)
		{
			dig=num%10;
			num=num/10;
	cout<<dig;	
		}

	}
	else cout<<"An invalid number";
    cout<<endl;
	system("pause");
	return 0;
}
