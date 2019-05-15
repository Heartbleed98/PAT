/*
注意审题
根据字典序比较字符串 
*/ 
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

struct node{
	string name;
	int height;
}; 

bool taller(node a, node b);

int main()
{
	int n, k, m;
	scanf("%d %d", &n,&k);
	
	vector<node> v1;
	string nm;
	int h;
	for(int i = 0; i < n; i++)
	{
		cin>>nm>>h;
		node n1={nm, h};
		v1.push_back(n1);
	}
	
	sort(v1.begin(), v1.end(), taller);
	
	int t = 0, row = k;
	while(row)
	{
		if(row==k)
		{
			m=n-n/k*(k-1);
		}else{
			m=n/k;
		}
		vector<string> v2(m);
		v2[m/2]=v1[t].name;
		
		int j = m / 2 - 1;
		for(int i = t + 1; i < t + m; i+=2)
		{
			v2[j] = v1[i].name;
			j--;
		}
		j = m / 2 + 1;
		for(int i = t + 2; i < t + m; i+=2)
		{
			v2[j] = v1[i].name;
			j++;
		}
		cout<<v2[0];
		for(int i = 1; i < m; i++)
		{
			cout<<" "<<v2[i];
		}
		cout<<endl;
		t+=m;
		row--;
	}
	
	return 0;
}

bool taller(node a, node b)
{
	return a.height != b.height ? a.height > b.height : a.name < b.name;
}
