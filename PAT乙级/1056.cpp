#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int num;
	cin>>num;
	
	vector<int> v;
	int temp1;
	for(int i = 0; i < num; i++)
	{
		cin>>temp1;
		v.push_back(temp1);
	}
	
	int sum = 0;
	int temp2 = 0;
	for(int i = 0; i < v.size(); i++)
	{
		for(int j = 0; j < v.size(); j++)
		{
			if(i == j)
			{
				continue;	
			}
			sum += v[i] * 10 + v[j];
		}
		
	}
	cout<<sum;
	
	return 0;
}
