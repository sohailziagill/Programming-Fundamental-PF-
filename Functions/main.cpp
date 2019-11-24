#include<iostream>
using namespace std;
char  vowel (char num1)
{
    switch (num1)
    {
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
       cout<<" true";
       break;
        default : cout<<" false";
        
    }
    }
    



int main()
{
    char num;
    cout<<"Enter the number  ";
    cin>>num;
    vowel(num);
    
    return 0;
}