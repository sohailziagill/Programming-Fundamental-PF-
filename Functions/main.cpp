#include <iostream>
using namespace std;
double billingAmount(double hRate, int yearlyIncome, int consTime);
int main()
{
    double hRate;
    int consTime;
    int yearlyIncome;
cout << "Enter yearly income: "; cin >> yearlyIncome;

 cout << "\nEnter the hourly rate: "; cin >> hRate;

 cout << "\nEnter consulting time in minutes: ";cin >> consTime;
   
    cout << "\nThe total billing amount is: $"<< billingAmount;
    cout << "."<< endl;
  return 0;
}
double billingAmount(double hRate, int yearlyIncome, int consTime)
{
  if (yearlyIncome<=25000) {
      if (consTime<=30)
          return 0;
      else
          return hRate*0.40*((consTime-30)/60);
  }
    else {
        if (consTime<=20)
            return 0;
        else
            return hRate*0.70*((consTime-20)/60);
    }
  }