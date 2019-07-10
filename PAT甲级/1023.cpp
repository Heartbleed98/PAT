#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    long long num;
    cin>>num;

    map<char, int> m1;
    string str = to_string(num);
    for(int i = 0; i < str.size(); i++)
    {
        m1[str[i]]++;
    }

    num = num * 2;
    str = to_string(num);
    map<char, int> m2;
    for(int i = 0; i < str.size(); i++)
    {
        m2[str[i]]++;
    }

    for(int i = 0; i < 10; i++)
    {
        if(m1[i+'0'] != m2[i+'0'])
        {
            cout<<"No"<<endl;
            cout<<num;
            return 0;
        }
    }

    cout<<"Yes"<<endl;
    cout<<num;
    return 0;
}