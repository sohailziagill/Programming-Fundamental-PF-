#include<iostream>
using namespace std;
int main()
{
    char str[150]="My name is Ali. I am 20 years old. I live in Islamabad.";
    char ts[5]="live";
    int i=0,x=0;
    while(i!=150)
    {
        if(ts[x]==str[i])
          if(ts[x+1]==str[i+1])
            if(ts[x+2]==str[i+2])
              if(ts[x+3]==str[i+3])
                if(ts[x+4]==str[i+4])
                cout<<"  Value found at   "<<i+1;
                i++;
                
        
    }
    
    
    return 0;
    
    
    
}
