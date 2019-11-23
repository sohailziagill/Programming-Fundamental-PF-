#include<iostream>
using namespace std;
int main()
{
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
