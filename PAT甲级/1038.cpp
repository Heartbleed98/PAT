#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(string str1, string str2)
{
    return str1 + str2 < str2 + str1;
    
}

int main()
{
    int n;
    cin>>n;
    vector<string> v1(n);
    for(int i = 0; i < n; i++)
    {
        cin>>v1[i];
        // while(v1[i][0] == '0')
        // {
        //     v1[i] = v1[i].substr(1);
        // }
    }
    sort(v1.begin(), v1.end(), cmp);
    
    string s;
    for(int i = 0; i < v1.size(); i++)
    {
        s += v1[i];
    }
    while(s.length() != 0 && s[0] == '0')
        s.erase(s.begin());
    if(s.size() == 0) 
        cout<<0;
    else
        cout<<s<<endl;

    return 0;
}