#include<iostream>
using namespace std;
char vowel(char num1)
{
    while(num1!='#')
    {
    
    switch(num1){
        case 'a':
        case'A':
        case'i':
        case'I':
        case'e':
        case'E':
        case'o':
        case'O':
        case'u':
        case'U':
       cout<<"\n is vowel \n";
       break;
        default : cout<<"\n is not vowel \n";
    }  
    cout<<"\nEnter the character or  Enter # to terminate   ";
cin>>num1;

    }
}

int main()
{ char num;
cout<<"Enter the character  ";
cin>>num;
vowel(num);
return 0;
}


