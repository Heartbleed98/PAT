#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int n, m;
	scanf("%d%d", &n,&m);
	
	vector<int> total; //每道题的总分 
	vector<set<char> > correct; //每道题目的正确选项 
	int t1,t2,t3;
	char ch1;
	for(int i = 0; i < m; i++)
	{
		scanf("%d%d%d", &t1,&t2,&t3);
		total.push_back(t1);
		for(int j = 0; j < t3; j++)
		{
			scanf("%c", &ch1);
			set<char> c;
			c.insert(ch1);
		}
		correct.push_back(c);
	}
	
	int t4;
	char ch2;
	set<char> cset;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			scanf("(%d", &t4);
			for(int k = 0; k < t4; k++)
			{
				scanf("%c", &ch2);
				cset.insert(ch2);
			}
			scanf(")"); 
		}				
	}

	return 0;
}

