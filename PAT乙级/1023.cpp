#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<int> num;
    int temp;
    for(int i = 0; i < 10; i++)
    {
        cin>>temp;
        num.push_back(temp);
    }

    for(int i = 1; i < 10; i++)
    {
        if(num[i]!=0)
        {
            cout<<i;
            num[i]--;
            break;
        }
    }
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < num[i]; j++)
        {
            cout<<i;
        }
    }

    return 0;
}