#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int rollDice(int num);
int main()
{
    int num;
    cout<<"Enter the number ";
    cin>>num;
    cout<<endl;
cout << "The number of times the dice are rolled to "
<< "get the sum  "<<num <<"   = " << rollDice(num) << endl;

return 0;
}
int rollDice(int num)
{
int die1;
int die2;
int sum;
int rollCount = 0;
srand(time(0));
while (sum != num)
{
die1 = rand() % 6 + 1;
die2 = rand() % 6 + 1;
sum = die1 + die2;
rollCount++;
}

return rollCount;
}
