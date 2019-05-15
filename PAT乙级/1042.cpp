/*
15min
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int array[1000] = {0};
    int t = 0;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] >= 97 && str[i] <= 122)
        {
            array[str[i]]++;
        }
        else if(str[i] >= 65 && str[i] <= 90)
        {
            t = str[i]+32;
            array[t]++;
        }
        else
            continue;
    }

    int max = 0, count = 0;
    for(int i = 0; i < 1000; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
            count = i;
        }
    }
    cout<<(char)count<<" "<<array[count];

    return 0;
}