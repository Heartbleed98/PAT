#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;

typedef struct {
	int poptime, endtime;
    queue<int> q;
} window;

int main()
{
	int n, m, k, q;
	cin>>n>>m>>k>>q;
	
	vector<window> windows(n+1);


	int query;
	for(int i = 0; i < q; i++)
	{
		cin>>query;
		cout<<customer[query]<<endl;
	}

	return 0;
}

