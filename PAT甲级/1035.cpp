/*
pair的使用
unordered_map是无序的，并非按照插入的顺序
 */
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    string name, password;
    vector<pair<string, string> > m1;
    int flag;
    for(int i = 0; i < n; i++)
    {
        flag = 0;
        cin>>name>>password;
        for(int j = 0; j < password.size(); j++)
        {
            if(password[j] == '1')
            {
                password[j] = '@';
                flag = 1;
            }
            else if (password[j] == '0')
            {
                password[j] = '%';
                flag = 1;
            }
            else if (password[j] == 'l')
            {
                password[j] = 'L';
                flag = 1;
            }
            else if (password[j] == 'O')
            {
                password[j] = 'o';
                flag = 1;
            }
        }
        if(flag == 1)
        {
            pair<string, string> p = make_pair(name, password);
            m1.push_back(p);
        }
            
    }

    int s = m1.size();
    
    if(s != 0)
    {
        cout<<s<<endl;
        for(auto it = m1.begin(); it != m1.end(); it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }
    }
    else
    {
        if(n == 1)
        {
            cout<<"There is 1 account and no account is modified"<<endl;
        }
        else
        {
            cout<<"There are "<<n<<" accounts and no account is modified"<<endl;
        }
        
    }

    return 0;
}