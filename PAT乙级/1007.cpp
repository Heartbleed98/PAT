#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int);

int main()
{
    int number, counter = 0;
    cin>>number;

    for(int i = 2; i <= number; i++)
    {
        if(isPrime(i))
        {
            if(isPrime(i+2) && (i+2)<=number)
            {
                counter++;
            }
        }
    }
    cout<<counter<<endl;
    return 0;
}

bool isPrime(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}