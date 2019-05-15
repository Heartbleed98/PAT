#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool bigger(char, char);
bool smaller(char, char);

int main()
{
    string str, s1, s2;
    int num1, num2;
    cin>>str;
    int result = 0;

    while(str.size() != 4)
    {
        str = str + "0";
    }

    while(result != 6174)
    {
        if(str[0]==str[1] && str[1]==str[2] && str[2]==str[3])
        {
            cout<<str<<" - "<<str<<" = 0000"<<endl;
            break;
        }

        sort(str.begin(), str.end(), smaller);
        s1 = str;
        num1 = stoi(str);

        sort(str.begin(), str.end(), bigger);
        s2 = str;
        num2 = stoi(str);

        result = num1 - num2;
        str = to_string(result);

        if(result < 1000)
        {
            cout<<s1<<" - "<<s2<<" = 0"<<result<<endl;
            str = '0' + str;
        }
        else
            cout<<s1<<" - "<<s2<<" = "<<result<<endl;
        
        
    }   
    return 0;
}

bool bigger(char a, char b)
{
    if(a < b)
        return true;
    else
        return false;
}

bool smaller(char a, char b)
{
    if(a > b)
        return true;
    else
        return false;
}