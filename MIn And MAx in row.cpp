#include<iostream>
using namespace std;
# define max 3
int main ()
{
int mat[max][max];
int largest,min;
for(int row=0;row<max;row++)
for(int col=0;col<max;col++)
{
	cout<<"\n Enter the value   ";
	cin>>mat[row][col];
	}	

for(int row=0;row<max;row++)
for(int col=0;col<max;col++)
{
	cout<<"\n "<<mat[row][col];
	}
	largest=mat[0][0];
	min=mat[0][0];	
for(int row=0;row<max;row++)
{
for(int col=0;col<max;col++)
{
	if(mat[row][col]>largest)
	largest=mat[row][col];
	if(mat[row][col]<min)
	min=mat[row][col];
	
	}	
	cout<<"\n The maximum value in row is   "<<largest;
	cout<<"\n The minimum value in row is   "<<min;
}
cout<<endl;
system("pause");
return 0;
}

