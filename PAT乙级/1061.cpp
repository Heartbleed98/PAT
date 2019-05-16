/*
10min
*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int n, m;
	scanf("%d %d", &n,&m);
	
	int temp;
	vector<int> total;
	vector<int> answer;
	for(int i = 0; i < m; i++)
	{
		scanf("%d", &temp);
		total.push_back(temp);
	}	
	for(int i = 0; i < m; i++)
	{
		scanf("%d", &temp);
		answer.push_back(temp);
	}
	
	
	for(int i = 0; i < n; i++)
	{
		int sum = 0;
		for(int j = 0; j < m; j++)
		{
			scanf("%d", &temp);
			if(temp == answer[j])
			{
				sum += total[j];
			}
		}
		cout<<sum<<endl;
	}
	
	
	return 0;	
} 
