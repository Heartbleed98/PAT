#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string str;
    vector<char> v1;
    for(int i = 0; i < 3; i++)
    {
        getline(cin, str);
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == '[')
            {
                while(str[i] != ']')
                {

                }
            }
        }
    }

    return 0;
}