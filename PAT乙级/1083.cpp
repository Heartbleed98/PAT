#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int n;
	int arr1[10000] = {0};
	scanf("%d", &n);
	vector<int> v1(n+1);
	
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &v1[i]);
		int sub;
		if(v1[i] >= i) sub = v1[i] - i;
		else sub = i - v1[i];
		arr1[sub]++;
	}
	
	for(int i = 9999; i >= 0; i--)
	{
		if(arr1[i] == 0 || arr1[i] == 1)
			continue;
		else 
			cout<<i<<" "<<arr1[i]<<endl;
	}

	return 0;
}

