#include <iostream>
using namespace std;
void display()
{
    cout << "\n                            Fitness Menu                            " << endl;
    cout << "********************************************************************" << endl;
    cout << "The cost of a monthly membership is $20. "<< endl;
    cout << "The cost of each personal training session is $15. "<<endl;
    cout << "Senior citizen discount is 30%" << endl;
    cout << "If membership has paid for 12 or more months, 15% discount" << endl;
    cout << "If more than 5 personal training sessions are paid for, 20% discount" << endl;
    cout << "********************************************************************\n" << endl;
}
double askprice()
{
   int price = 20;
   int discount;
   char ask,senior,twelveormore;
   cout << "Are you a senior citizen? Type Y or N " << endl;
   cin >> senior;
    if((senior == 'Y')||(senior == 'y'))
   {
              discount = price - (price * 0.30);
              cout<<"\nThe discount is  "<<discount<<endl;
               price=price-discount;
}
   cout << "Have you paid for more than 12 months? Type Y or N" << endl;
   cin >> twelveormore;
  if((twelveormore == 'Y')||(twelveormore == 'y'))
   {
              discount = price - (price * 0.15);
              cout<<"\nThe discount is  "<<discount<<endl;
              price=price-discount;
   }
   cout << "Have you received more than 5 personal training sessions? Type Y or N" << endl;
   cin >> ask;
   if((ask == 'Y')||(ask=='y'))
   {
             
              discount = price - (price * 0.20);
              cout<<"\nThe discount is  "<<discount<<endl;
               price=price-discount;
   }
   return price;
}
     int main()
     {
         display();
        cout<<"\nThe price after discount is  "<< askprice();
         return 0;
         }