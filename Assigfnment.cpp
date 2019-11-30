#include<iostream>
#include<string>
#define size 10
#define namesize 30
#define sub 5
using namespace std;
struct student
 {
int reg;
string name ;
int mark[sub];
int totmark;
float perc;
char grade;
};


 void SingleDisplay(student ss[], int nn )
   {
   		bool found=false;
   	int displayreg,i;
   	cout<<"\n Enter the registration number that you want to display     ";
   	cin>>displayreg;
   	
   		for(i=0;i<nn;i++)
	{
		if(ss[i].reg==displayreg){
		
		found=true;
		break;
		}
			}
	
	if(found)
	{
	
	cout<<"\n Result found  at   "<<i+1<<endl;
		
		
		ss[i].totmark=0;
		
		for(int j=0;j<sub;j++)
  		{
  			
  			ss[i].totmark=ss[i].totmark+ss[i].mark[j];
  			
  			
		  }
	
	
	
		ss[i].perc=ss[i].totmark/500.0*100.0;
  		{
  			if (ss[i].perc <= 100 && ss[i].perc >= 80)
			ss[i].grade = 'A';
		else if (ss[i].perc < 80 && ss[i].perc >= 70)
			ss[i].grade = 'B';
		else if (ss[i].perc < 70 && ss[i].perc >= 60)
			ss[i].grade = 'C';
		else if (ss[i].perc < 60 && ss[i].perc >= 50)
			ss[i].grade = 'D';
		else
			ss[i].grade = 'F';
		  }
  		
  		cout<<"\n The name of student is    "<<ss[i].name;
  		cout<<"\n Registration number of student is     "<<ss[i].reg<<endl;
  		cout<<"Total marks are      "<<ss[i].totmark<<endl;
  		cout<<" The percentage is      "<<ss[i].perc<<endl;
  		cout<<" The grade is     "<<ss[i].grade<<endl;
  		
}
	else
		cout<<"\n Result not  found"<<endl; 
	
	
   	
   	
   	
   	
   	
   	
   	
   }







void Delete(student ss[],int& nn)
{
	
		bool found=false;
	int delelereg,i;
cout<<"\n Enter the student registration number that you want to delele     ";
cin>>delelereg;

	for(i=0;i<nn;i++)
	{
		if(ss[i].reg==delelereg)
		{
		
		found=true;
		break;
		}
			}
	
	if(found)
	{
		cout<<"\n Result found  at   "<<i+1<<endl;
		for(int j=i;j<nn;j++)//nn is garbage.
				{
		ss[j].reg=ss[j+1].reg;
		ss[j].name=ss[j+1].name;
		for(int k=0;k<sub-1;k++)
		ss[j].mark[k]=ss[j+1].mark[k];
		}
	nn--;	
	}
else
		cout<<"\n Result not  found"<<endl; 
	




}












void  Update(student ss[], int nn)
{
		bool found=false;
	int upgradereg,i;
	cout<<"\nEnter the  registration number to upgarde    ";
	cin>>upgradereg;
	for(i=0;i<nn;i++)
	{
		if(ss[i].reg==upgradereg)
		{
		
		found=true;
		break;
		}
			}
	
	if(found)
	{
	
	cout<<"\n Result found  at   "<<i+1<<endl;
	cout<<"\n Enter the updated registration number of student   ";
	cin>>ss[i].reg;
	cout<<"\n Enter the updated name of student   ";
	cin>>ss[i].name;
	for(int j=0;j<sub;j++)
	{
	
	cout<<"\nEnter the updated marks of subject  "<<j+1<<"    ";
	cin>>ss[i].mark[j];
}
	
}
	else
		cout<<"\n Result not  found"<<endl; 
	
	
	
	
	
	
	
}










void  Search(student ss[], int nn )
{
	int searchreg, i;
	bool found=false;
	cout<<"\n Enter the searching registration number     ";
	cin>>searchreg;
	for(i=0;i<nn;i++)
	{
		if(ss[i].reg==searchreg){
		
		found=true;
		break;
		}
			}
	
	if(found)
	cout<<"\n Result found  at   "<<i+1<<endl;
	else
		cout<<"\n Result not  found"<<endl; 
	
	
}





void  AppendDB(student ss[], int& n,int newstunumber)
{

	
for(int i=n;i<(n+newstunumber);i++)
{
	cout<<"\n Enter registration number of student      ";
	cin>>ss[i].reg;
	cout<<"\n Enter the  name of student    ";
	cin>>ss[i].name;
	for(int j=0;j<sub;j++)
	{
		cout<<"\n Enter the "<<j+1<<" subject  mark      ";
		cin>>ss[i].mark[j];
		
			}
				}
				n=(n+newstunumber);	
}







void choice(int &x)
{
	do { 
		
		cout << "welcome to Student Data Base" << endl << endl;
		cout << "1 : To creat Data Base." << endl;
		cout << "2 : to Appent/Insert New Record" << endl;
		cout << "3 : To Search a Record." << endl;
		cout << "4 : To Sort Data Base." << endl;
		cout << "5 : To Update a Record." << endl;
		cout << "6 : To Delete a Record." << endl;
		cout << "7 : To Display single Record." << endl;
		cout << "8 : To display All Records." << endl;
		cout << "9 : To Exit." << endl << endl;
	
		cin >> x;
		if (x < 0 || x>9)
		
			cout << "Invalid output...";
	}
	 while (x < 0 || x>9);
}



void myinput( student ss[],int nn)
{
	
for(int i=0;i<nn;i++)
{
	cout<<"\n Enter registration number of student      ";
	cin>>ss[i].reg;
	cout<<"\n Enter the  name of student    ";
	cin>>ss[i].name;
	for(int j=0;j<sub;j++)
	{
		cout<<"\n Enter the "<<j+1<<" subject  mark      ";
		cin>>ss[i].mark[j];
		
		
	}
	

	}	
	
	}
  
  
  
  void result(student ss[],int nn)
  {
  		cout << "Student name \tReg No.\tObt.Marks\t%age\tGrade" << endl;
  	for(int i=0;i<nn;i++)
  	{
  		ss[i].totmark=0;
  		for(int j=0;j<sub;j++)
  		{
  			
  			ss[i].totmark=ss[i].totmark+ss[i].mark[j];
  			
  			
		  }
  		
  		
  		ss[i].perc=ss[i].totmark/500.0*100.0;
  		{
  			if (ss[i].perc <= 100 && ss[i].perc >= 80)
			ss[i].grade = 'A';
		else if (ss[i].perc < 80 && ss[i].perc >= 70)
			ss[i].grade = 'B';
		else if (ss[i].perc < 70 && ss[i].perc >= 60)
			ss[i].grade = 'C';
		else if (ss[i].perc < 60 && ss[i].perc >= 50)
			ss[i].grade = 'D';
		else
			ss[i].grade = 'F';
		  }
  		
  		cout<<"\n" <<ss[i].name;
  		cout<<"\t \t"<<ss[i].reg;
  		cout<<"\t   "<<ss[i].totmark;
  		cout<<"\t       "<<ss[i].perc;
  		cout<<" \t         "<<ss[i].grade;
  		
	  }
  	cout<<endl;
  	
  	
  	
  	
  	
	  }	
	
	
	
int main()
{
student data[size];
int n,x,loop = 1,newstunumber;


	do {
choice(x);
switch(x)
{
	
	
	case 1: {
		cout<<"Enter the number of student      ";
cin>>n; 
		myinput(data,n);
		break;

	}
	
	
	
	
	
	
		case 2:{
				cout<<"Enter the number of student      ";
cin>>newstunumber; 
		             AppendDB(data, n,newstunumber);              
					 
					 break;
				}
			case 3:
		{
			Search(data, n );
			
			
		 break;	
		}
	/*	case 4:
		             Sort(user_array, percentage, grade, size, isDBcreated);                  break;
		*/case 5:{
			
		              Update(data, n);
					                  break;
		          }
			case 6:{
			
		               Delete(data,n);				
					   break;
}
		case 7:{
		
		
		              SingleDisplay(data, n );        
					   break;
				}
		case 8:
		{
		
	         result( data, n);
		break;
		}
		case 9:
			{
			
	loop=0;
	break;	
	}
			
	
}
	} while (loop == 1);
	system ("pause");
return 0;


}






