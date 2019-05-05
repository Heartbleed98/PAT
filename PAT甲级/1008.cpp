#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	
	int sum = 0;
	int current = 0;
	for(int i = 0; i < n; i++)
	{
		int target = 0;
		scanf("%d", &target);
		if(target > current)
		{
			sum += (target - current) * 6 + 5;
		}
		else
		{
			sum += (current - target) * 4 + 5;
		}
		current = target;
	}
	
	cout<<sum<<endl;

	return 0;
}

