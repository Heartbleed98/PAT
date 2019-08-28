#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n, m;
	scanf("%d%d", &n,&m);
	
	int arr[1001] = {0};
	int tmp;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &tmp);
		arr[tmp]++;
	}
	
	int v1 = 0, v2 = 0;
	for(int i = 0; i < 1001; i++)
	{
		if(arr[i] > 0)
		{
			if((m-i) < 0)
				continue;
			if(i == (m - i) && arr[i] > 1)
			{
				v1 = i;
				v2 = i;
				printf("%d %d", v1, v2);
				return 0;
			}
			if(i != (m - i) && arr[m-i] > 0) 
			{
				v1 = i;
				v2 = m - i;
				printf("%d %d", v1, v2);
				return 0;
			}
		}
	}

	printf("No Solution");

	return 0;
}

