#include<iostream>
using namespace std;
int  main()
{
	int num1,num2;
	char num;

	cout<<"Enter the two numbers\n";
	cin>>num1>>num2;
	cout<<"Enter A for addition, S for subtraction ,M for multiplication,D for division    \n  ";
		cin>>num;
	switch(num)
	{
		case 'A':
		cout<<"Adition is "<<num1+num2;
		break;
		case 'S':
		cout<<"subtaraction is "<<num1-num2;
		break;
		case 'M':
			cout<<"Multiplication is "<<num1*num2;
			break;
		case 'D':
				cout<<"Division is "<<num1/num2;
				break;
		
		defualt:
			cout<<"Invalid operator";
			break;
	}		
cout<<endl;
	system("pause");
				return 0;
}
