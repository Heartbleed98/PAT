#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct edge{
    int distance;
    int cost;
};

const int INF = 1000000000;
const int MAXV = 1000;
edge graph[MAXV][MAXV];
bool visited[MAXV] = { false };
int dist[MAXV];
int path[MAXV];
int cost[MAXV];
int n, m, s, d;

void Dijkstra(int source)
{
    fill(dist, dist + MAXV, INF);
    fill(cost, cost + MAXV, 0);
    dist[source] = 0;

    for(int i = 0; i < n; i++)
        path[i] = i;

    for(int i = 0; i < n; i++)
    {
        int u = -1, min = INF;
        for(int j = 0; j < n; j++)
        {
            if(visited[j] == false && dist[j] < min)
            {
                u = j;
                min = dist[j];
            }
        }

        if(min == -1) return;
        visited[u] = true;

        for(int j = 0; j < n; j++)
        {
            if(visited[j] == false && graph[u][j].distance != INF)
            {
                if(graph[u][j].distance + dist[u] < dist[j])
                {
                    dist[j] = graph[u][j].distance + dist[u];
                    cost[j] = graph[u][j].cost +cost[u];
                    path[j] = u;
                }
                else if(graph[u][j].distance + dist[u] == dist[j])
                {
                    if(graph[u][j].cost + cost[u] < cost[j])
                    {
                        dist[j] = graph[u][j].distance + dist[u];
                        cost[j] = graph[u][j].cost +cost[u];
                        path[j] = u;
                    }
                }
            }
        }
    }
}

void printPath(int v) {
    if(v == s) {
        printf("%d ", v);
        return ;
    }
    printPath(path[v]);
    printf("%d ", v);
}

int main()
{
    scanf("%d%d%d%d", &n,&m,&s,&d);
    edge e1 ={INF, 0};
    fill(graph[0], graph[0] + MAXV *MAXV, e1);
    int a, b, x, y;
    for(int i = 0; i < m; i++)
    {
        scanf("%d%d%d%d", &a,&b,&x,&y);
        graph[a][b].distance = graph[b][a].distance = x;
        graph[a][b].cost = graph[b][a].cost = y;
    }

    Dijkstra(s);

	for (int i = 0; i < n; i++)
	{
		if (i != s && i == d)
		{
			printPath(i);
            printf("%d %d", dist[i], cost[i]);
			printf("\n");
		}
	}


    return 0;
}