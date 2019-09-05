#include<iostream>
#include<string>
#include<stack> 
#include<vector>
using namespace std;

int main()
{
	int m, n, k;
	scanf("%d%d%d", &m,&n,&k);
	
	for(int i = 0; i < k; i++)
	{
		stack<int> s1;	 
		bool flag = false;
		vector<int> v1(n+1);
		for(int j = 1; j <= n; j++)
		{
			scanf("%d", &v1[j]);
		}
		int current = 1;
		for(int j = 1; j <= n; j++)
		{
			s1.push(j);
			if(s1.size() > m) break;
			while(!s1.empty() && s1.top() == v1[current])
			{
				s1.pop();
				current++;
			}
		}
		
		if(current == n + 1) flag = true;
		if(flag) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}

