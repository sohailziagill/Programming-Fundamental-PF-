#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int width=20,height=20,gameover;
int x,y,friutx,friuty,score,flag;
int tailx[100],taily[100];
int counttail=0;
void setup()
{
	gameover=0;
	x=width/2;
	y=height/2;
	
	label1:
		friutx=rand()%20;
		if(friutx==0)
		goto label1;
	label2:
		friuty=rand()%20;
		if(friuty==0)
		goto label2;
		score=0;
}
void draw()
{
	int i,j,k;
	system("cls");
	for(i=0;i<width;i++)
	{
		for(j=0;j<height;j++)
		{
			if(i==0||i==height-1||j==0||j==width-1)
			{
			cout<<"*";	
			}
			else
			{
				if(i==x&&j==y)
				cout<<"O";
				else if(i==friutx && j==friuty)
				cout<<"F";
				else
				{
					int ch=0;
					for(k=0;k<counttail;k++)//i,j
					{
					if(i==tailx[k] && j==taily[k])
					{
						cout<<"o";
						ch=1;
						
						}	
					}
					if(ch==0)
					cout<<" ";
				}
			}
		}
		cout<<"\n";
	}
	cout<<"\nSCORE="<<score;
}
void input()
{
	if(kbhit())
	{
		switch(getch())
		{
			case 'a'://aswz
			flag=1;
			break;
			case 's':
				flag=2;
				break;
			case 'w':
				flag=3;
				break;
			case 'z':
				flag=4;
				break;
			case 'x':
				gameover=1;
				break;
		}
	}
}
void makelogic()
{
	int i;
	int prevx=tailx[0];
	int prevy=taily[0];
	int prev2x,prev2y;
	tailx[0]=x;
	taily[0]=y;
	for(i=1;i<counttail;i++)
	{
		prev2x=tailx[i];
		prev2y=taily[i];
		tailx[i]=prevx;
		taily[i]=prevy;
		prevx=prev2x;
		prevy=prev2y;
		
	}
	switch(flag)
	{
	case 1:
	      y--;
        	break;
	case 2:
	      y++;
	        break;
	case 3:
          x--;
	        break;
	case 4:
		  x++;
		    break;
	default:
	      break;	    
		
	}
	if(x<0||x>width||y<0||y>height)
	gameover=1;
	for(i=0;i<counttail;i++)
	{
		if(x==tailx[i] && y==taily[i])
		gameover=1;
		
	}
	if(x==friutx && y==friuty)
	{
		label3:
			friutx=rand()%20;
			if(friutx==0)
			goto label3;
			label4:
			friuty=rand()%20;
			if(friuty==0)
			goto label4;
			score=score+10;
			counttail++;
	}
}
int main()
{
	int m,n;
	char c;
	label5:
		setup();
					
		while(!gameover)
		{
			draw();
			input();
			makelogic();
			for(m=0;m<1000;m++)
			{
			for(n=0;n<10000;n++)
		    	{
				
		    	}
	     	}
	     	for(m=0;m<1000;m++)
			{
			for(n=0;n<10000;n++)
		    	{
				
		    	}
	     	}
	     	for(m=0;m<1000;m++)
			{
			for(n=0;n<10000;n++)
		    	{
				
		    	}
	     	}
	     	
		}
		cout<<"\n Press Y to continue again:";
		cin>>c;
		if(c=='y'||c=='Y')
		goto label5;
		cout<<endl;
		system("pause");
		return 0;
}
