#include<iostream>
using namespace std;

int main()
{
    int n, counter = 0;
    cin>>n;
    while(n != 1)
    {
        if(n % 2 == 0)
        {
            n = 0.5 * n;
            counter++;
        }
        else
        {
            n = 0.5 * (3 * n + 1);
            counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}