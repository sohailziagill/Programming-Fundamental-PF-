#include<iostream>
using namespace std;
char player='x';
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
void draw()
{
	
	cout<<"\n The Tik Tok Toe Game.  \n\n\n  ";
	for(int i=0;i<3;i++)
	{
	for(int j=0;j<3;j++)
    {
    	cout<<matrix[i][j]<<"\t";
	}
    cout<<endl;
    }
}
void input()
{
	int a;
	cout<<"\n\nEnter the number. ";
	cin>>a;
	if(a==1)
	matrix[0][0]=player;
	else if(a==2)
	matrix[0][1]=player;
	else if(a==3)
	matrix[0][2]=player;
	else if(a==4)
	matrix[1][0]=player;
	else if(a==5)
	matrix[1][1]=player;
	else if(a==6)
	matrix[1][2]=player;
	else if(a==7)
	matrix[2][0]=player;
	else if(a==8)
	matrix[2][1]=player;
	else if(a==9)
	matrix[2][2]=player;
	else
	cout<<"\n Invalid Input!  ";
}
void toggleplayer()
{
	if(player=='x')
	player='o';
	else
	player='x';
}
char win()
{
	//For first palyer.
	if(matrix[0][0]=='x'&&matrix[0][1]=='x'&&matrix[0][2]=='x')
    return 'x';
    if(matrix[1][0]=='x'&&matrix[1][1]=='x'&&matrix[1][2]=='x')
    return 'x';
    if(matrix[2][0]=='x'&&matrix[2][1]=='x'&&matrix[2][2]=='x')
    return 'x';
    if(matrix[0][0]=='x'&&matrix[1][0]=='x'&&matrix[2][0]=='x')
    return 'x';
    if(matrix[0][1]=='x'&&matrix[1][1]=='x'&&matrix[2][1]=='x')
    return 'x';
    if(matrix[0][2]=='x'&&matrix[1][2]=='x'&&matrix[2][2]=='x')
    return 'x';
    if(matrix[0][2]=='x'&&matrix[1][1]=='x'&&matrix[2][0]=='x')
    return 'x';
    if(matrix[0][0]=='x'&&matrix[1][1]=='x'&&matrix[2][2]=='x')
    return 'x';
	
	//For player two.
	if(matrix[0][0]=='o'&&matrix[0][1]=='o'&&matrix[0][2]=='o')
    return 'o';
    if(matrix[1][0]=='o'&&matrix[1][1]=='o'&&matrix[1][2]=='o')
    return 'o';
    if(matrix[2][0]=='o'&&matrix[2][1]=='o'&&matrix[2][2]=='o')
    return 'o';
    if(matrix[0][0]=='o'&&matrix[1][0]=='o'&&matrix[2][0]=='o')
    return 'o';
    if(matrix[0][1]=='o'&&matrix[1][1]=='o'&&matrix[2][1]=='o')
    return 'o';
    if(matrix[0][2]=='o'&&matrix[1][2]=='o'&&matrix[2][2]=='o')
    return 'o';
    if(matrix[0][2]=='o'&&matrix[1][1]=='o'&&matrix[2][0]=='o')
    return 'o';
    if(matrix[0][0]=='o'&&matrix[1][1]=='o'&&matrix[2][2]=='o')
    return 'o';
	return '/';
     }
     int main()
     {
     	
     	int c=0;
     	draw();
     	while(c<9)//Number of turns.
     	{
		 input();
     	draw();
     	if(win()=='x')
     	{
     		cout<<"\nThe player 1('x') is  winer";
     		break;
		 }
		 else if(win()=='o')
		 {
		 	cout<<"\nThe palyer 2 ('o')is winer ";
		 	break;
		 }
		 toggleplayer();
		 c++;
	
	}
	cout<<endl;
	system("pause");
	return 0;
	 }
