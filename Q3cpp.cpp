#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
	int num;
	char a;
	cout<<"Enter the number  ";
	cin>>num;
	if(num<=35)
	{

		if(num<=9)
			cout<<"\n"<<num;
		else
		{
			a= static_cast<char>(num+55);
		cout<<a;
	}
	}
	else
		cout<<"You are entered an invalid number  ";
		cout<<endl;
	system("pause");
	return 0;
}
