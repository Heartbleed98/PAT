#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<string> v;
    string str;
    string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};

    for(int i = 0; i < 4; i++)
    {
        cin>>str;
        v.push_back(str);
    }

    char c1, c2;
    int x = 0;
    for(int i = 0; i < v[0].size(); i++)
    {
        if(x == 0 && v[0][i] == v[1][i] && 
            v[0][i] >= 'A' && v[0][i] <= 'G' &&
            v[1][i] >= 'A' && v[1][i] <= 'G')
        {
            c1 = v[0][i];
            x = 1;
            continue;
        }
        if(x == 1 && v[0][i] == v[1][i] && 
            ((v[0][i] >= 'A' && v[0][i] <= 'N') || (v[0][i] >= '0' && v[0][i] <= '9')) &&
            ((v[1][i] >= 'A' && v[1][i] <= 'N') || (v[0][i] >= '0' && v[0][i] <= '9')))
        {
            c2 = v[0][i];
            break;
        }
    }
    
    int pos = 0;
    for(int i = 0; i < v[2].size(); i++)
    {
        if(v[2][i] == v[3][i] && 
            v[2][i] >= 'A' && v[2][i] <= 'z' &&
            v[3][i] >= 'A' && v[3][i] <= 'z')
        {
            pos = i;
            break;
        }
    }

    cout<<week[c1 - 'A']<<" ";

    if(c2>='0'&&c2<='9')
		cout<<"0"<<c2-'0'<<":";
	else
		cout<<c2-'A'+10<<":";

    if(pos < 10)
        cout<<'0'<<pos<<endl;
    else
        cout<<pos<<endl;
    return 0;
}