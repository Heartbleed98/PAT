#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    string str;
    string str1 = "", str2 = "";
    cin>>str;
    
    int temp = 0;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == 'E')
        {
            temp = i+1;
            break;
        }
        str1 += str[i];
        
    }

    for(int i = temp; i < str.size(); i++)
    {
        str2 += str[i];
    }

    double num2;
    num2 = stoi(str2);
    if(num2 < 0)
    {
        num2 = 0 - num2;
        vector<char> v;
        for(int i = 0; i < str1.size(); i++)
        {
            if((str1[i] >= '0' && str[i] <= '9'))
                v.push_back(str1[i]);
        }
        cout<<(str1[0] == '+' ? "" : "-")<<"0.";
        for(int i = 0; i < num2 - 1; i++)
            cout<<'0';
        for(int i = 0; i < v.size(); i++)
        {
            cout<<v[i];
        }
    }
    else
    {
        if(num2 < str1.size() - 3)
        {
            for(int i = 3; i <= str1.size() - 3; i++)
            {
                swap(str1[i], str1[i-1]);
            }
            cout<<(str1[0] == '+' ? "" : "-");
            for(int i = 1; i < str1.size(); i++)
            {
                
                    cout<<str1[i];
            }
        }
        else
        {
            int len = num2 - (str1.size() - 3);
            for(int i = 0; i < len; i++)
            {
                str1.push_back('0');
            }
            cout<<(str1[0] == '+' ? "" : "-");
            for(int i = 1; i < str1.size(); i++)
            {
                if(str1[i] == '.')
                    continue;
                else
                    cout<<str1[i];
            }
        }
    }


    return 0;
}