#include<iostream>
#include<string>
using namespace std;
class persontype
{
	string fname,mname,lname;
	public:
		void setfname(string);
		void setmname(string);
		void setlname(string);
		void getfname();
		void getmname();
		void getlname();
		void display();
		void check(const persontype &);
};
void persontype::display()
{
cout<<"\n The full name is  "<<fname<<" "<<mname<<" "<<lname;	
}
void persontype::setfname(string t)
{fname=t;
}
void persontype::setmname(string t)
{mname=t;
}
void persontype::setlname(string t)
{lname=t;
}
void persontype::getfname()
{
	cout<<"\n Enter the First name  ";
	cin>>fname;
}
void persontype::getmname()
{
	cout<<"\n Enter the Middle name  ";
	cin>>mname;
}
void persontype::getlname()
{
	cout<<"\n Enter the Last name  ";
	cin>>lname;
}
void persontype::check(const persontype &s)
{
	int x,y,z;
	x=fname.compare(s.fname);
	y=mname.compare(s.mname);
	z=lname.compare(s.lname);
	if(x==0)
	cout<<"\n The First name is same.  ";
	else
	cout<<"\n The First name is diffrent.  ";
	if(y==0)
	cout<<"\n The Middle name is same.  ";
	else
	cout<<"\n The Mirst name is diffrent.  ";
	if(z==0)
	cout<<"\n The Last name is same.  ";
	else
	cout<<"\n The Last name is diffrent.  ";
	 if(x==0&&y==0&&z==0)
	 cout<<"\n The full name is same!  ";
	 else 
	 cout<<"\n The full name is not same!";
}
int main()
{
	persontype sohail,user;
	//For default input.
	sohail.setfname("Sohail");
	sohail.setmname("Zia");
	sohail.setlname("Gill");
	user.getfname();
	user.getmname();
	user.getlname();
	sohail.display();
	user.display();
	user.check(sohail);
	cout<<endl;
	system("pause");
	return 0;
}
