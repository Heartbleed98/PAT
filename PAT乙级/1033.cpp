/*
30min
vector中find函数的应用
*/
#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    string broken, input, output;
    cin>>broken>>input;

    vector<char> v;
    bool no_capital = false;
    for(int i = 0; i < broken.size(); i++)
    {
        if(broken[i] == '+')
        {
            no_capital = true;
        }
    }
    for(int i = 0; i < input.size(); i++)
    {
        if(input[i] >= 'a' && input[i] <= 'z')
        {
            input[i] = input[i] - 32;
            if(find(broken.begin(), broken.end(), input[i]) == broken.end())
            {
                v.push_back(input[i]+32);
            }
        }
        else if(no_capital == true)
        {
            if(input[i] >= 'A' && input[i] <= 'Z')
            {
                continue;
            }
            else
            {
                if(find(broken.begin(), broken.end(), input[i]) == broken.end())
                {
                    v.push_back(input[i]);
                }
            }
        }
        else if(no_capital == false)
        {
            if(find(broken.begin(), broken.end(), input[i]) == broken.end())
            {
                v.push_back(input[i]);
            }
        }
    }

    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }

    return 0;
}
