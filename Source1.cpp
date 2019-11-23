#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
char response;
double num1;
double num2;
cout << "This program adds two numbers." << endl;
cout << "Would you like to run the program: (Y/y) ";
cin >> response;

while (response == 'Y' || response == 'y')
{
    cout << endl;
cout << "Enter two numbers: ";
cin >> num1 >> num2;
cout << endl;


cout << num1 << " + " << num2 << " = " << num1 + num2
<< endl;

cout << "Would you like to add again: (Y/y) ";
cin >> response;
cout << endl;
}
system("pause");
return 0;
}