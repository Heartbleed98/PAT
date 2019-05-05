#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
	int k1, k2;
	scanf("%d", &k1);
	
	map<int, double> a, b;
	int exp;
	double cof;
	for(int i = 0; i < k1; i++)
	{
		cin>>exp>>cof;
		a[exp] += cof;
	}
	
	for(int i = 0; i < k2; i++)
	{
		cin>>exp>>cof;
		b[exp] += cof;
	}
	

	return 0;
}

