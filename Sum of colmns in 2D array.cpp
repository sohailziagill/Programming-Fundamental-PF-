#include<iostream>
using namespace std;
# define max 3
int main()
{
	
int mat[max][max];
int largest,min,sum;
for(int row=0;row<max;row++)
for(int col=0;col<max;col++)
{
	cout<<"\n Enter the value   ";
	cin>>mat[row][col];
	}	

for(int row=0;row<max;row++)
{

for(int col=0;col<max;col++)
{
	cout<<"\t"<<mat[row][col];
	}
	cout<<endl;
}
	for(int col=0;col<max;col++)
	{

	for(int row;row<max;row++)
	{
		sum=sum+mat[row][col];
	}
	cout<<"\n sum of the column is  "<<sum;
}
	
cout<<endl;
	system("pause");
	return 0;
}
