/*
25min
map是会自动排序的
*/ 
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
using namespace std;

int main()
{
	int n, m;
	scanf("%d%d", &n,&m);
	
	int count1 = 0, count2 = 0;
	
	vector<string> v1;
	vector<vector<string> > v2;
	set<string> s1;
	string str1;
	for(int i = 0; i < m; i++)
	{
		cin>>str1;
		s1.insert(str1);
	}

	int temp = 0;
	string str2;
	for(int i = 0; i < n; i++)
	{
		vector<string> v3;
		cin>>str1;
		cin>>temp;
		v3.push_back(str1);
		for(int i = 0; i < temp; i++)
		{
			cin>>str2;
			if(s1.find(str2) != s1.end())
			{
				v3.push_back(str2);
			}
		}
		v2.push_back(v3);
	}
	
	for(int i = 0; i < v2.size(); i++)
	{
		if(v2[i].size() == 1) continue;
		else
		{
			count1++;
			for(int j = 0; j < v2[i].size(); j++)
			{
				if(j == 0) cout<<v2[i][j]<<":";
				else { cout<<" "<<v2[i][j]; count2++; }
			}
			cout<<endl;
		}
	}
	cout<<count1<<" "<<count2<<endl;
	return 0;
}

