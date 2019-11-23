#include<iostream>
using namespace std;
int main()
{
	int time,hour,sec,mint;
	cout<<"Enter time in hours\n";
	cin>>hour;
	cout<<"Enter time in mints\n";
	cin>>mint;
	cout<<"Enter time in seconds\n";
	cin>>sec;
	time=hour*3600+mint*60+sec;
	cout<<"Time elased is "<<time<<endl;
	system("pause");
	return 0;
}