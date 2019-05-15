#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    double num;
    char ch;
    cin>>num>>ch;

    for(int i = 0; i < num; i++)
    {
        cout<<ch;
    }
    cout<<endl;

    for(int i = 0; i < round(num / 2.0) - 2; i++)
    {
        for(int j = 0; j < num; j++)
        {
            if(j == 0 || j == num-1)
                cout<<ch;
            else
                cout<<" ";
        }
        cout<<endl;
    }

    for(int i = 0; i < num; i++)
    {
        cout<<ch;
    }

    return 0;
}