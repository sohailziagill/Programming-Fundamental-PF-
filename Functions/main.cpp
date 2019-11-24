#include <iostream>
using namespace std;
#define size 70
#define tmarks 100
#define percent 100
void search(int REG[], string name[], int sub1[], int sub2[], int sub3[], int marks[], int n, int per[], char grade[]);
void displayall(int REG[], string name[], int sub1[], int sub2[], int sub3[], int marks[], int n, int per[], char grade[]);
void update(int REG[], string name[], int sub1[], int sub2[], int sub3[], int marks[], int n, int per[], char grade[]);
void init(int REG[], string name[], int sub1[], int sub2[], int sub3[], int marks[], int n, int per[], char grade[]);

int main( )
{
	int choice,nostudents;
	int reg[size],  sub1[size], sub2[size], sub3[size], marks[tmarks], per[percent];
	string name[size];
	char grade[size];
	cout << " To Type the Create data base Type 1 \n"
		<< "For Searching a students result, type 2 \n "
		<< "For Updating Result Card type 3 \n"
		<< "to display all students result, type 4 \n"
		<< "To End type 5\n";
	
	cin >> choice;
	
		cout << "Type Number of Students out of 70";
		cin >> nostudents;
	
	
	while ( choice != 5 )
		{
		switch ( choice )
		{
		case 1:
			init(reg, name, sub1, sub2, sub3, marks, nostudents, per, grade);
			
			break;
		case 2:
			search(reg, name, sub1, sub2, sub3, marks, nostudents, per, grade);

		case 3:
			update(reg, name, sub1, sub2, sub3, marks, nostudents, per, grade);
			break;
		case 4:
			displayall(reg, name, sub1, sub2, sub3, marks, nostudents, per, grade);
		
			break;
		default:
			cout << "Type Correct # To End Type 5";

		
		
		
	}
	cout << " To Type the Create data base Type 1 \n"
			<< "For Searching a students result, type 2 \n "
			<< "For Updating Result Card type 3 \n"
			<< "to display all students result, type 4 \n"
			<< "To End type 5\n";
		cin >> choice;
}
	system("pause");
	return 0;
	
	
}
void init(int REG[], string name[],int sub1[],int sub2[],int sub3[],int marks[],int n,int per[],char grade[])
{

	
	for ( int i=0; i < n; i++ )
	{
	    cout << "\n Type the Registration Number of students \n";
	
		cin >> REG[i];
	
		cout << "\n Name of Student of   Reg# " << REG[i] << " \n";
		cin >> name[i];
			cout << "Type marks of Subject #1 of student with reg # " << REG[i] << " ";
			cin >> sub1[i];
			cout << "Type marks of Subject #2 of student with reg # " << REG[i] << " ";
			cin >> sub2[i];
			cout << "Type marks of Subject #3 of student with reg # " << REG[i] << " ";
			cin >> sub3[i];

		marks[i]=sub1[i] + sub2[i] + sub3[i];
	}
	for ( int i=0; i < n; i++ )
	{
		per[i]=(marks[i] / 300) * 100;
		if ( per[i] > 60 && per[i] < 70 )
			grade[i]='C';
		else if ( per[i] > 70 && per[i] < 75 )
			grade[i]='B';
		else if ( per[i] > 80 )
			grade[i]='A';
		else 
			grade[i]='D';
	}
	
	
}
void update(int REG[],string name[], int sub1[], int sub2[], int sub3[], int marks[], int n, int per[],char grade[])
{
	int r;
	cout << " REG # OF STUDENT YOU WANT TO UPDATE";
	cin >> r;
	for ( int i=0; i < n; i++ )
	{
		if ( REG[i] == r )
		{
				cout << "TYPE NEW SUBJECT MARKS # 1 of REG # :: " << REG[i];
				cin >> sub1[i];
		
		
				cout << "TYPE NEW SUBJECT MARKS # 2 of REG # :: " << REG[i];
				cin >> sub2[i];
	
		
				cout << "TYPE NEW SUBJECT MARKS # 3 of REG # :: " << REG[i];
				cin >> sub3[i];
		
			marks[i]=sub1[i] + sub2[i] + sub3[i];
			per[i]=(marks[i] / 300) * 100;
			break;
		}
	}
}
void displayall(int REG[], string name[], int sub1[], int sub2[], int sub3[], int marks[], int n, int per[], char grade[])
{
	cout << " S NO " << "\t " << " REG # " << "\t " <<
	" NAME " << "\t " << "SUBJECT # 1" << "\t " << "SUBJECT # 2"
	<< " \t " << " SUBJECT # 3" << "\t " << " MARKS OBTAINED " << "\t "
	<< "PERCENTAGE" << "\t " << " GRADE " << "\t " << endl;
	for ( int i=0; i < n; i++ )
	{
		cout << i + 1 << "\t \t" << REG[i] 
		<< "\t \t" << name[i] << "\t \t" << sub1[i] << "\t \t" << sub2[i] 
		<< "\t \t" << sub3[i] << "\t \t" << marks[i] 
		<< "\t \t" << per[i] << "\t \t" << grade[i]<<endl;
	}
}
void search(int REG[],string name[], int sub1[], int sub2[], int sub3[], int marks[], int n, int per[], char grade[])
{
	int x;
	cout << "Enter The REG # You Want to Search ";
	cin >> x;
	for ( int i=0; i < n; i++ )
	{
		if ( REG[i] == x )
		{
			cout << " REG # " << "\t " << " NAME " << "\t " << "SUBJECT # 1" << "\t" << "SUBJECT # 2"
			<< " \t" << " SUBJECT # 3" << "\t" << " MARKS OBTAINED " << "\t" << "PERCENTAGE" 
			<< "\t " << " GRADE " << "\t";
			cout << REG[i] << "\t \t" << name[i] << "\t \t" << sub1[i] << "\t \t" << sub2[i] 
			<< "\t \t" << sub3[i] << "\t \t" << marks[i] << "\t \t" << per[i]
			<< "\t \t" << grade[i] << endl;
		}
	}
}
