#include <iostream>
#include <iomanip>
using namespace std;
int print_month(int pmonth,int p_days);

int main()
{
    int month,days,year;
  
    cout << "Enter a date in the form of month-day-year: ";
    cin >> month >> days >> year;
    if ( (month < 1 || month > 12)&&( days < 1 || days > 31 ) )
 cout << "INVALID: Please try again." << endl;
else
{
 if ( year%4==0&&year%100!=0||year%400==0  )
cout << year << " is a leap year." << endl;

    cout << "You have entered: " << month << "-" << days << "-" << year << endl;
  
  cout<<"\n THe monthdays are  "<<  print_month(month,days)<<endl;
}
}
int print_month(int pmonth,int p_days)
{
           switch (pmonth){
  case 12 :
       p_days = p_days + 334;
       case 11 :
       p_days = p_days + 304;
       case 10 :
       p_days = p_days + 273;
       case 9 :
       p_days =  p_days + 243;
       case 8 :
       p_days = p_days + 212;
       case 7 :
       p_days = p_days + 181;
       case 6 :
       p_days = p_days + 151;
       case 5 :
 p_days = p_days + 120;
       case 4 :
       p_days = p_days + 90;
       case 3 :
       p_days = p_days + 59;
       case 2 :
       p_days = p_days + 31;
      case 1 :
       p_days = p_days + 0;
       
       }
       return p_days;
}
