 #include<iostream>
 using namespace std;
 void initialize(int& x,int& y, char& z)
 {
     x=0;
     y=0;
     
     
 }
void hoursrate(double& hour,double& rate)
    {
      cout<<"Enter the worked hour  ";
      cin>>hour;
      cout<<"\nEnter the hours rate   ";
      cin>>rate;
    
      
    }
    double salary(double rate, double  hour ,double& amount )
    {
        if(hour>40){
    amount =((hour-40)*rate)*1.5;
          amount =amount +rate*40;}
          else amount=rate*hour;
          return amount;
    }
 
 void printcheck(double rate,double hour,double amount)
 {
     cout<<"\n The worked hours are  "<<hour<<endl;
     cout<<" The hourly rate is "<<rate;
     cout<<"\n The salary is "<<amount;
 }
 void funone (int & x,int  y)
 {
     int num;
     cout<<"\n Enter a number ";
     cin>>num;
     x=(x*2)+y-num;
     cout<<"\n The value of x is  "<<x;
 }
 void nextchar(char& z )
 {
     z=z++;
     cout<<"\n The value of z is  "<<z;
 }
 int main()
 {
  int x, y;
char z;
double rate, hour;
double amount=0;
     initialize(x,y,z);
     hoursrate(hour,rate);
     salary(hour,rate,amount);
     printcheck(rate,hour,amount);
     funone(x,y);
     nextchar(z);
     return 0;
 }