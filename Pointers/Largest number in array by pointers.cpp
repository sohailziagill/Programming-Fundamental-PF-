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
void large(int *lptr,int nn)
{
	int large=*(lptr);
	for(int i=0;i<max;i++)
	{
		if(*(lptr+i)>large)
		large=*(lptr+i);
	}
	cout<<"\n The largest number is "<<large;
}
int main()
{
	int arr[max];
	myfun(arr,max);
	outputt(arr,max);
	large(arr,max);
	cout<<endl;
	system("pause");
	return 0;
}
