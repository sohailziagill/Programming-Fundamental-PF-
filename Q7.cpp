#include<iostream>
using namespace std;
int main()
{
	int f,g,i,n,m,k,l;
	cout<<"Enter the total number of cookies\n";
	cin>>f;
	cout<<"Enter the number of cookies in box ";
	cin>>g;
	cout<<"\nEnter the numbers of cookies in counttainer  ";
	cin>>i;
	n=f/g;
	cout<<"\nThe required number of boxes for cookies  "<<n;
	m=n/i;
	cout<<"\nThe required container of the cookies boxes  "<<m;
	k=f%g;
	cout<<"\nThe remaining cookies   "<<k;
	l=m%i;
	cout<<"\nThe remaining number of boxes"<<l;
	cout<<endl;
	system("pause");
	return 0;
}
