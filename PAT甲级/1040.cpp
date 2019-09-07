#include<iostream>
#include<string>
#include<vector>
using namespace std;

const int MAXV = 1010;
int dp[MAXV][MAXV];

int main()
{
    string str;
    getline(cin, str);
    int len = str.size(), ans = 1;
    fill(dp[0], dp[0] + MAXV * MAXV, 0);

    for(int i = 0; i < len; i++)
    {
        dp[i][i] = 1;
        if(i < len - 1)
        {
            if(str[i] == str[i+1])
            {
                dp[i][i+1] = 1;
                ans = 2;
            }
        }
    }

    for(int l = 3; l <= len; l++)
    {
        for(int i = 0; i + l - 1 < len; i++)
        {
            int j = i + l -1;
            if(str[i] == str[j] && dp[i+1][j-1] == 1)
            {
                dp[i][j] = 1;
                ans = l;
            }
        }
    }
    cout<<ans;
    return 0;
}