/*
银行窗口问题，一般要设置一个window[]数组，表示各个窗口的使用情况 
将所有时间换成秒来计算 
*/ 

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

struct node{
	int coming;
	int time;
};

bool cmp(node n1, node n2)
{
	return n1.coming < n2.coming;
}

int main()
{
	int N, K;
	scanf("%d %d", &N, &K);
	
	vector<node> v1;
	for(int i = 0; i < N; i++)
	{
		int hh, mm, ss, time;
		scanf("%d:%d:%d %d", &hh, &mm, &ss, &time);
		int coming = hh * 3600 + mm * 60 +ss;
		if(coming > 61200)
			continue;
		node n1{coming, time};
		v1.push_back(n1);
	}
	
	sort(v1.begin(), v1.end(), cmp);
	
	vector<int> window(K, 28800);
	double result = 0.0;
	for(int i = 0; i < v1.size(); i++)
	{
		int tmpIndex = 0, minFinish = window[0];
		for(int j = 1; j < K; j++)
		{
			if(minFinish > window[j])
			{
				minFinish = window[j];
				tmpIndex = j;	
			}
		}	
		if(window[tmpIndex] <= v1[i].coming)
			window[tmpIndex] = v1[i].coming + v1[i].time;
		else
		{
			result += (window[tmpIndex] - v1[i].coming);
			window[tmpIndex] += v1[i].time;
		}
	}
	
	if(v1.size() == 0)
        printf("0.0");
    else
        printf("%.1f", result / 60.0 / v1.size());

	return 0;
}

