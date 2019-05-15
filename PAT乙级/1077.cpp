/*
四舍五入函数round()
*/ 
#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	int n, m;
	int temp;
	
	vector<vector<int> > v1;
	scanf("%d%d", &n,&m);
	
	for(int i = 0; i < n; i++)
	{
		vector<int> v2;
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &temp);
			
			if(temp >= 0 && temp <= m)
			{
				v2.push_back(temp);
			}
		}
		v1.push_back(v2);
	}
	
	
	for(int i = 0; i < v1.size(); i++)
	{
		sort(v1[i].begin()+1, v1[i].end());
		double g1 = 0, g2 = 0;
		for(int j = 0; j < v1[i].size()-1; j++)
		{
			if(j == 0)
			{
				g1 = v1[i][j];
			}
			else if(j == 1)
			{
				continue;
			}
			else
			{
				g2 += v1[i][j];
			}
		}
		g2 = g2 / (v1[i].size() - 3);
		double sum = (g1 + g2) / 2;
		cout<<round(sum)<<endl;
	}
	
	return 0;
}
