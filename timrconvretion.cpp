#include<iostream>
using namespace std;

void f()
{
    cout<<"time convert from 12 formate to 24,enter 1"<<endl;
    cout<<"time convert from 24 formate to 12,enter 2"<<endl;
    cout<<"close program to enter 0"<<endl;   
}

int time12t24(int &hours,int min)
{
    if(hours<24)
    {

        if(hours>=12)
           return hours;
        else
        {
         return hours+=12;
        }
    }
    else
    {
        cout<<"incorect give time"<<endl;
		return hours=0;
    }

}

int time24t12(int &hours,int min)
{
    if(hours<24)
    {

        if(hours<=12)
           return hours;
        else
        {
         return hours-=12;
        }
    }
    else
    {
        cout<<"incorect give time"<<endl;
		return hours=0;
    }

}

int main()
{
    int x=0;
    f();
    cin>>x;
     int min=0,hours=0;
    while(x!=0)
    {
        if(x==1)
        {
            cout<<"\n\nenter time in 12 formate=hh/mm"<<endl;
            cin>>hours>>min;
            cout<<"\ngiven time "<<hours<<":"<<min<<endl;
            time12t24(hours,min);
			if(hours!=0)
            cout<<"\ntime in 24 formate "<<hours<<":"<<min<<endl;
            
        }

        else if(x==2)
        {
            cout<<"\n\nenter time in 24 formate=hh/mm"<<endl;
            cin>>hours>>min;
            cout<<"\ngiven time "<<hours<<":"<<min<<endl;
            time24t12(hours,min);
			if(hours!=0)
            cout<<"\ntime in 12 formate "<<hours<<":"<<min<<endl;
        }
        else
        {
            cout<<"\nyou enter incorrect num,enter corect num=";
           
        }
		cout<<"\n\nif you want to run again enter 3 other wise enter 0 "<<endl;
		cin>>x;
		if(x==3)
		f();
		else
			x=0;
		cin>>x;


    }

}