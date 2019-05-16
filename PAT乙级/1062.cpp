#include<iostream>
#include<string>
#include<vector> 
using namespace std;

bool check(int a, int b)
{
	for(int i = 2; i <= a; i++)
	{
		if(a % i == 0 && b % i ==0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int n1, n2, m1, m2;
	scanf("%d/%d %d/%d", &n1,&m1,&n2,&m2);
	if(n1 * m2 > n2 * m1) {
        swap(n1, n2);
        swap(m1, m2);
    }
	
	int k;
	scanf("%d", &k);
	
	int a = n2 * m2 * k;
	n1 *= (a/m1);
	n2 *= (a/m2);
	
	int temp = a / k;
	
	vector<int> v;
	for(int i = n1 + 1; i < n2; i++)
	{
		if((i % temp == 0) && (check((i/temp), k)) == true)
		{
			v.push_back(i/temp);
		}
	}
	
	for(int i = 0; i < v.size(); i++)
	{
		if(i != 0) cout<<" ";
		cout<<v[i]<<"/"<<k;
	}
	return 0;
}
