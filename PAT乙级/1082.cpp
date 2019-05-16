#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
	int n;
	map<int, double> m1;
	scanf("%d", &n);
	
	int a;
	double x, y;
	double score;
	
	for(int i = 0; i < n; i++)
	{
		cin>>a>>x>>y;
		score = sqrt(pow(x, 2) + pow(y, 2));
		m1[a] = score;
	}

	map<int, double>::iterator it = m1.begin();
	double min = sqrt(20000), max = 0; 
	int bestIndex, worstIndex;
	while(it != m1.end())
	{
		if((it->second) > max)
		{
			max = it->second;
			worstIndex = it->first;	
		}	
		if((it->second) < min)
		{
			min = it->second;
			bestIndex = it->first;	
		}
		it++;
	}
	cout<<setw(4)<<setfill('0')<<bestIndex<<" "<<setw(4)<<setfill('0')<<worstIndex<<endl;
	return 0;
}

