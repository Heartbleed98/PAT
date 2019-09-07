#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

vector<int> level(102, 0);
map<int, vector<int> >  m1;
int d = 0;
void dfs(int root, int depth)
{
	if(m1[root].size() == 0)
	{
		if(depth >= d) d = depth;
		level[depth]++;
		return;
	}
	else
		for(int i = 0; i < m1[root].size(); i++)
		{
			int node = m1[root][i];
			dfs(node, depth + 1);
		}
}

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	
	for(int i = 0; i < m; i++)
	{
		int id, k;
		scanf("%d%d", &id,&k);
		vector<int> child(k);
		for(int j = 0; j < k; j++)
		{
			scanf("%d", &child[j]);
		}
		m1[id] = child;
	}

	dfs(1, 1);

	for(int i = 1; i <= d; i++)
	{
		if(i != 1) printf(" ");
		printf("%d", level[i]);
	}

	return 0;
}

