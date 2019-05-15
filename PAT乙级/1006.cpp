#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n >= 100)
    {
        int x = n / 100;
        for(int i = 0; i < x; i++)
            cout<<'B';
        n = n - x * 100;
    }
    if(n >= 10 && n < 100)
    {
        int x = n / 10;
        for(int i = 0; i < x; i++)
            cout<<'S';
        n = n - x * 10;
    }
    if(n < 10)
    {
        int x = 1;
        for(; n != 0; n--,x++)
        {
            cout<<x;
        }
    }
    return 0;
}