 #include <iostream>
using namespace std;

void digitCount(long num);

int main ()
{
    long num;
    
    cout <<"Enter a long number of 5 digits. " <<endl;
    cin >>num;
    cout <<endl;
    
    digitCount(num);
    
    system("PAUSE");
    return 0;
}

void digitCount(long num)
{
    int e = 0, o = 0, x = 0;
    
    for (int i = 0; i <= 5; i++)
    {
        x = num % 10;
         num = num / 10;
    
        
        if (x % 10 != 0)
        {
              if ((x % 2) == 0)//to check evven.
                 e++;
              else if ((x % 2) != 0)//to check odd.
                 o++;
        }
            
       
    }
    
   
    cout << "number of odd numbers = " << o << endl;
    cout << "number of even numbers = " << e << endl;
}
