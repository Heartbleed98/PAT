/*
映射关系的转换
整数按照指定位数的输出：cout<<setw(4)<<setfill('0')<<id;
*/ 
#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<iomanip>
using namespace std;

bool isPrime(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n, m;
	cin>>n;
	
	int rank[10000] = {0};
	int id;
	for(int i = 0; i < n; i++)
	{
		cin>>id;
		rank[id] = i+1;
	}
	
	cin>>m;
	int checked[10000] = {0};
	for(int i = 0; i < m; i++)
	{
		cin>>id;
		if(checked[id] == 0)
		{
			if(rank[id] == 1)
			{
				cout<<setw(4)<<setfill('0')<<id<<":Mystery Award"<<endl;
			}
			else if(rank[id] == 0)
			{
				cout<<setw(4)<<setfill('0')<<id<<":Are you kidding?"<<endl;
				continue;
			}
			else if(isPrime(rank[id]))
			{
				cout<<setw(4)<<setfill('0')<<id<<":Minion"<<endl;
			}
			else
			{
				cout<<setw(4)<<setfill('0')<<id<<":Chocolate"<<endl;
			}
		}
		else
		{
			cout<<setw(4)<<setfill('0')<<id<<":Checked"<<endl;
		}
		checked[id] = 1;
	}
	
	return 0;
}
