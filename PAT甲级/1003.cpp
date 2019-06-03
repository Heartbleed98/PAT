#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

const int inf = 99999999;

int matrix[510][510];
bool visited[510];
int dist[510];
int path[510];
int source;

int num[510], w[510];
int main()
{
	int n, m, c1, c2;
	scanf("%d%d%d%d", &n,&m,&c1,&c2);
	
	vector<int> weight;
	for(int i = 0; i < n; i++)
	{
		int tmp;
		scanf("%d", &tmp);
		weight.push_back(tmp);
	}
		
	fill(matrix[0], matrix[0] + 510 * 510, inf);
	fill(dist, dist + 510, inf);	
	for(int i = 0; i < m; i++)
	{
		int a, b, c;
		scanf("%d%d%d", &a,&b,&c);
		matrix[a][b] = matrix[b][a] = c;	
	}
	
	dist[c1] = 0;
	w[c1] = weight[c1];
	num[c1] = 1;

	for (int i = 0; i < n; i++)
	{
		int min_cost = inf; //最小权值
		int min_cost_index = -1; //最小权值的下标
		for (int j = 0; j < n; j++)
		{
			if (visited[j] == false && dist[j] < min_cost)
			{
				min_cost = dist[j];
				min_cost_index = j;
			}
		}
		if(min_cost_index == -1) break;
		visited[min_cost_index] = true;
		
		for (int j = 0; j < n; j++)
		{
			if (visited[j] == false && matrix[min_cost_index][j] != inf)
			{
				if(matrix[min_cost_index][j] + min_cost < dist[j])
				{
					dist[j] = matrix[min_cost_index][j] + min_cost;
					num[j] = num[min_cost_index];
					w[j] = w[min_cost_index] + weight[j]; 
				}
				else if(matrix[min_cost_index][j] + min_cost == dist[j])
				{
					num[j] = num[j] + num[min_cost_index];
					if(w[min_cost_index] + weight[j] > w[j])
                        w[j] = w[min_cost_index] + weight[j];
				}
			}
		}
	}
	
	cout<<num[c2]<<" "<<w[c2]<<endl;
	return 0;
}
