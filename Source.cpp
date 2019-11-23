#include<iostream>
using namespace std;
int main()
{int row,largest ;
	int array[4][3];
	for(int i=0;i<4;i++)
	for(int j=0;j<3;j++)
	{ 
	cout<<" Enter ( 12) numbers in database by hitting 12 times enter button   in  at position"<<"\n";
	cin>>array[i][j];
}

cout<<"\nEnter a row number in which you want to find the largest number   "<<endl;
cin>>row;
row--;
for(int k=0;k<3;k++){

if(largest<array[row][k])
largest =array[row][k];}
cout<<"\n The largest number in row "<<row+1<<"  is "<<largest ;
cout<<endl;
	system("pause");
	return 0;
	
}
