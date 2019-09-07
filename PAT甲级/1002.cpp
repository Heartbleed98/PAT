#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

struct node{
	int exp; //指数 
	double cof; //系数 
};

bool cmp(node n1, node n2)
{
	return (n1.exp >= n2.exp);
}

int main()
{
	int a;
	scanf("%d", &a);
	vector<node> v1;
	for(int i = 0; i < a; i++)
	{
		int tmp1;
		double tmp2;
		scanf("%d%lf", &tmp1, &tmp2);
		node n1 = {tmp1, tmp2};
		v1.push_back(n1);
	} 
	sort(v1.begin(), v1.end(), cmp); 
	
	int b;
	scanf("%d", &b);
	vector<node> v2;
	for(int i = 0; i < b; i++)
	{
		int tmp1;
		double tmp2;
		scanf("%d%lf", &tmp1, &tmp2);
		node n1 = {tmp1, tmp2};
		v2.push_back(n1);
	}
	sort(v2.begin(), v2.end(), cmp); 
	
	vector<node> v3;
	int tmp1;
	double tmp2;
	size_t x, y;
	for(x = 0, y = 0; x < v1.size(), y < v2.size(); )
	{
		if(v1[x].exp == v2[y].exp)
		{
			tmp1 = v1[x].exp;
			tmp2 = v1[x].cof + v2[y].cof;
			node n1 = {tmp1, tmp2};
			v3.push_back(n1);
			x++;
			y++;
		}
		else if(v1[x].exp > v2[y].exp)
		{
			tmp1 = v1[x].exp;
			tmp2 = v1[x].cof;
			node n1 = {tmp1, tmp2};
			v3.push_back(n1);
			x++;
		}
		else if(v1[x].exp < v2[y].exp)
		{
			tmp1 = v2[y].exp;
			tmp2 = v2[y].cof;
			node n1 = {tmp1, tmp2};
			v3.push_back(n1);
			y++;
		}
	}
	
	if(x < v1.size() && y == v2.size())
	{
		for(int i = x; i < v1.size(); i++)
		{
			tmp1 = v1[i].exp;
			tmp2 = v1[i].cof;
			node n1 = {tmp1, tmp2};
			v3.push_back(n1);
		}
	}
	if(y < v2.size() && x == v1.size())
	{
		for(int i = y; i < v2.size(); i++)
		{
			tmp1 = v2[i].exp;
			tmp2 = v2[i].cof;
			node n1 = {tmp1, tmp2};
			v3.push_back(n1);
		}
	}
	
	int count = 0;
	for(int i = 0; i < v3.size(); i++)
	{
		if(v3[i].cof == 0) count++;
	}
	cout<<(v3.size() - count);
	for(int i = 0; i < v3.size(); i++)
	{
		if(v3[i].cof == 0) continue;
		printf(" %d %.1lf", v3[i].exp,v3[i].cof); 
	}
	
	return 0;
}
