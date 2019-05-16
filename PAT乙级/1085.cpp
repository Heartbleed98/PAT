/*
如果map需要重新排序，可以把它的相关值提取出来到vector中，再进行排序
map无法通过sort()函数来排序
unordered_map的顺序是随机无序的 
*/ 
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

struct node {
	string school;
	int score;
	int count;
};

bool compare(node n1, node n2)
{
	if(n1.score != n2.score)
		return n1.score > n2.score;
	else if(n1.count != n2.count)
		return n1.count < n2.count;
	else 
		return n1.school < n2.school;
}

string converse(string str)
{
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}
	return str;
}

int main()
{
	int n;
	map<string, double> m1;
	map<string, int> m2;
	scanf("%d", &n);
	
	string num;
	double score;
	string school;
	for(int i = 0; i < n; i++)
	{
		cin>>num>>score>>school;
		school = converse(school);

		if(num[0] == 'B')
		{
			m1[school] += (score / 1.5);
			m2[school] ++;
		}
		else if(num[0] == 'A')
		{
			m1[school] += score;
			m2[school] ++;
		}
		else if(num[0] == 'T')
		{
			m1[school] += (score * 1.5);
			m2[school] ++;
		}
	}
	
	map<string, double>::iterator it1 = m1.begin();
	map<string, int>::iterator it2 = m2.begin();
	
	vector<node> v1;
	while(it2 != m2.end())
	{
		v1.push_back(node{it2->first, (int)m1[it2->first], m2[it2->first]});
		it2++;
	}
	sort(v1.begin(), v1.end(), compare);
	
	int rank = 0, pres = -1;
	cout<<v1.size()<<endl;
	for(int i = 0; i < v1.size(); i++)
	{
		if(pres != v1[i].score)
			rank = i + 1;
		pres = v1[i].score;
		cout<<rank<<" "<<v1[i].school<<" "<<v1[i].score<<" "<<v1[i].count<<endl;
	}
	return 0;
}

