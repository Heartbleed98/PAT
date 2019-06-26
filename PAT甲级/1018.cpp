#include<iostream>
#include<string>
#include<vector>
using namespace std;

const int MAXV = 510;
int matrix[MAXV][MAXV];
bool visit[MAXV] = {false};
int dis[MAXV];
int source = 0;
	
int cmax, n, sp, m;
vector<int> bikes(MAXV); 
vector<int> path;

vector<int> pre[MAXV];
vector<int> temppath;
int minNeed = INT_MAX, minBack = INT_MAX;

void Dijkstra(int source)
{
	fill(dis, dis + MAXV, INT_MAX);
	dis[0] = 0;
    for(int i = 0; i <= n; i++) {
        int u = -1, minn = INT_MAX;
        for(int j = 0; j <= n; j++) {
            if(visit[j] == false && dis[j] < minn) {
                u = j;
                minn = dis[j];
            }
        }
        if(u == -1) return;
        visit[u] = true;
        for(int v = 0; v <= n; v++) {
            if(visit[v] == false && matrix[u][v] != INT_MAX) {
                if(dis[v] > dis[u] + matrix[u][v]) {
                    dis[v] = dis[u] + matrix[u][v];
                    pre[v].clear();
                    pre[v].push_back(u);
                }else if(dis[v] == dis[u] + matrix[u][v]) {
                    pre[v].push_back(u);
                }
            }
        }
    }
}

void dfs(int v)
{
	temppath.push_back(v);
    if(v == 0)
    {
    	int need = 0, back = 0;
        for(int i = temppath.size() - 1; i >= 0; i--) {
            int id = temppath[i];
            if(bikes[id] > 0) {
                back += bikes[id];
            } else {
                if(back > (0 - bikes[id])) {
                    back += bikes[id];
                } else {
                    need += ((0 - bikes[id]) - back);
                    back = 0;
                }
            }
        }
        if(need < minNeed) {
            minNeed = need;
            minBack = back;
            path = temppath;
        } else if(need == minNeed && back < minBack) {
            minBack = back;
            path = temppath;
        }
        temppath.pop_back();
        return ;
	}
    for(int i = 0; i < pre[v].size(); i++)
    	dfs(pre[v][i]);

	temppath.pop_back();
}

int main()
{

	scanf("%d %d %d %d", &cmax,&n,&sp,&m);
	fill(matrix[0], matrix[0] + MAXV * MAXV, INT_MAX);
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &bikes[i]);
		bikes[i] = bikes[i] - cmax / 2;
	}
	
	int si, sj, time;
	for(int i = 0; i < m; i++)
	{
		scanf("%d %d %d", &si,&sj,&time);
		matrix[si][sj] = matrix[sj][si] = time;
	}
	
	Dijkstra(source);
	dfs(sp);
    printf("%d 0", minNeed);
    for(int i = path.size() - 2; i >= 0; i--)
        printf("->%d", path[i]);
    printf(" %d", minBack);

	return 0;
}

