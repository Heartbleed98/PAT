/*
注意题目的输出格式
*/ 
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int T, K;
	scanf("%d%d", &T,&K);
	
	int n1, b, t, n2;
	int total = T;
	for(int i = 0; i < K; i++)
	{
		cin>>n1>>b>>t>>n2;
		if(total <= 0) { cout<<"Game Over."<<endl; break; }
		else 
		{
			if(t > total)
			{
				cout<<"Not enough tokens.  Total = "<<total<<"."<<endl;
			}
			else
			{
				if(b == (n1 < n2)) //玩家赌对的情况 
				{
					total += t;
					cout<<"Win "<<t<<"!  Total = "<<total<<"."<<endl;
				}
				else
				{
					total -= t;
					cout<<"Lose "<<t<<".  Total = "<<total<<"."<<endl;
				}
			}
		}
	} 

	return 0;
}

