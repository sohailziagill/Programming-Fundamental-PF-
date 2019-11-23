#include<iostream>
using namespace std;
int main()
{
cout<<"\n**************************************************************************";
cout<<"\nProgrammer :  Sohail Zia Gill.";
cout<<"\nTitle: Fiboccani numbers display.";
cout<<"\nCompiler : Visual Studio 19";
cout<<"\nDated : 6/Oct/19";
cout<<"\nCompiling date : 7/Oct/19";
cout<<"\nIslamic International University Islamabad.";
cout<<"\n***************************************************************************";
	int f1=0,f2=1,f3;
	int value,count=2;
	f3=f2+f1;
	cout<<"Please enter the value  ";
	cin>>value;
	if(value==1)
		cout<<f1;
	 if(value==2)
		 cout<<f2;
	 if(value>2)
	 {
	while(count<value)
	{
		f1=f2;
		f2=f3;
		f3=f2+f1;
		count++;
		cout<<"\t"<<f3;
	}
	
	
	 }
	 cout<<endl;
	 
	system("pause");
	return 0;
}
