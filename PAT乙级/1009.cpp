#include<iostream>
#include<string>
#include<algorithm>
#include<typeinfo>
#include<vector>
using namespace std;

int main()
{
    string str, temp = "";
    getline(cin, str);
    vector<string> result;



    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '\n')
            break;
        if(str[i] != ' ')
            temp += str[i];
        else
        {
            result.push_back(temp);
            temp = "";
        }
    }
    result.push_back(temp);
    reverse(result.begin(), result.end());
    for(int i = 0; i < result.size()-1; i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<result[result.size()-1];

    return 0;
}