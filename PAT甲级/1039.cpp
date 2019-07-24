#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    int n, k;
    scanf("%d%d", &n,&k);

    map<string, vector<int> > m1;
    vector<int> v1;
    for(int a = 0; a < k; a++)
    {
        int i, ni;
        scanf("%d%d", &i,&ni);
        string str;
        for(int b = 0; b < ni; b++)
        {
            cin>>str;
            m1[str].push_back(i);
        }
    }

    vector<string> v2;
    string s;
    for(int i = 0; i < n; i++)
    {
        cin>>s;
        v2.push_back(s);
    }

    for(int i = 0; i < n; i++)
    {
        cout<<v2[i]<<" ";
        sort(m1[v2[i]].begin(), m1[v2[i]].end());
        cout<<m1[v2[i]].size();
        if(m1[v2[i]].size() != 0) cout<<" ";
        for(int j = 0; j < m1[v2[i]].size(); j++)
        {   
            if(j != 0) cout<<" ";
            cout<<m1[v2[i]][j];
        }
        cout<<endl;
    }

    return 0;
}