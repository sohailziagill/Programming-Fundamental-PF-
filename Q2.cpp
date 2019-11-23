#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Plz enter three numbers\n";
	cin>>a>>b>>c;
	if(a>b&&b>>c)
		cout<<c<<"\t"<<b<<"\t"<<a;
	else if(b>a&&a>c)
	cout<<c<<"\t"<<a<<"\t"<<b;
	else if(c>b&&b>a)
		cout<<a<<"\t"<<b<<" \t "<<c;
	else if(c>a&&a>b)
		cout<<b<<" \t "<<a<<"\t  "<<c;
		else if(b>c&&c>a)
			cout<<a<<"  \t"<<c<<"\t  "<<b;
		else
			cout<<b<<"  \t"<<c<<"\t  "<<a;
		cout<<endl;
			system("pause");
			return 0;
}