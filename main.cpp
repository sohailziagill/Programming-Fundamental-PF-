#include<iostream>
using namespace std;
int main()
{
    
    int chang,hdoller,quater,dimes,pinies,nickels;
    cout<<"Enter the change  ";
    cin>>chang;
    hdoller=chang/50;
    chang=chang%50;
    quater=chang/25;
      chang=chang%25;
      dimes=chang/10;
        chang=chang%10;
        nickels=chang/5;
        pinies=chang%5;
     cout<<"\n The half dolerrs are   "<<hdoller<<" \nThe quaters are   "<<quater<<"\nThe dimes  are  "<<dimes<<"\n The number of nickels are "<<nickels<<"\n The pinies are   "<<pinies;   
    
    cout<<endl;
    return 0;
}
