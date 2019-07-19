/*
图的邻接表表示（可节省空间）
求连通分量个数
邻接表的DFS
 */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
vector<vector<int> > Adj;
vector<bool> visited;

void DFS(int s)
{
    visited[s] = true;
    for(vector<int>::iterator i = Adj[s].begin(); i != Adj[s].end(); i++)
    {
        if(!visited[*i])
            DFS(*i);
    }
}

int main()
{
    scanf("%d", &n);
    Adj.resize(n+1);
    visited.resize(n+1, false);
    int a, b;
    for(int i = 0; i < n - 1; i++)
    {
        scanf("%d%d", &a,&b);
        Adj[a].push_back(b);
        Adj[b].push_back(a);
    }

    int count = 0;
    for(int i = 1; i <= n; i++)
    {
        if(visited[i] == false)
        {
            DFS(i);
            count++;
        }
    }

    if(count >= 2)
        printf("Error: %d components", count);
    else
    {
        int min = 11000;
        int cnt;
        for(int i = 1; i < Adj.size(); i++)
        {
            cnt = Adj[i].size();
            if(cnt < min) 
                min = cnt;
        }
        for(int i = 1; i < Adj.size(); i++)
        {
            if(min == Adj[i].size())
                printf("%d\n", i);
        }
    }
    return 0;
}
