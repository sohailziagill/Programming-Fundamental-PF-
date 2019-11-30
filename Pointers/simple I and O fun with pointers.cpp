#include<iostream>
# define max 5
using namespace std;
void myfun(int *lptr,int nn)
{
	for(int i=0;i<nn;i++)
	{
		cout<<"\n Enter the value ";
		cin>>*(lptr+i);
		
	}
	
}
void outputt(int *lptr,int nn)
{
	for(int i=0;i<nn;i++)
	{
		cout<<"\n "<<*(lptr+i);
		
	}
	
}
int main()
{
	int arr[max];
	myfun(arr,max);
	outputt(arr,max);
	cout<<endl;
	system("pause");
	return 0;
}
