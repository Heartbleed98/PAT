/*
vector::resize函数的使用
*/ 
#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

int main()
{
	int m, n, tol;
	cin>>m>>n>>tol;
	
	vector<vector<int> > v;
	v.resize(n, vector<int>(m)); 
	map<int, int> m;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin>>v[i][j];
			m[v[i][j]]++;
		}
	}

	return 0;
}

