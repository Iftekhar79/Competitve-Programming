#include <iostream>
using namespace std;

int divisors(int);

int main() 
{
    int input = 0;
    cout<<"Enter one int: ";
    cin>>input;
    cout<<"\nSmallest divisor for "<<input<<": ";
    cout<<divisors(input)<<endl;
    return 0;
}

int divisors(int input)
{
    int base = 1;
    int divisorNum = 0;
    int num = 0;
    
    while(divisorNum != input)
    {
        num = 0;
        for(int i = 1;i <= base; i++)
        {
            if(base%i==0)
            {
                num++;
            }
        }
        divisorNum = num;
        base++;
        
    }
    base-=1;
    return base;
}
