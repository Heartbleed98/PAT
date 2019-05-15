/*
注意要初始化变量等于0
注意整数与小数之间的除法 
*/ 
#include<iostream>
#include<string>
#include<vector> 
#include<iomanip>
using namespace std;
int main()
{
	int N, D;
	double e;
	cin>>N>>e>>D;
	
	int mayEmpty = 0, empty = 0;
	
	
	int K;
	double temp;
	vector<int> v;
	for(int i = 0; i < N; i++)
	{
		int count = 0;
		cin>>K;
		for(int j = 0; j < K; j++)
		{
			cin>>temp;
			if(temp < e)
			{
				count++;
			}
		}
		if(count > K / 2 && K <= D)
		{
			mayEmpty++;
		}
		if(count > K / 2 && K > D)
		{
			empty++;
		}
	}
	
	double r1, r2;
	r1 = (mayEmpty / (double)N) * 100.0;
	r2 = (empty / (double)N) * 100.0;
	
	cout<<fixed<<setprecision(1)<<r1<<"% "<<r2<<"%";

	return 0;
}
