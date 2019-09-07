#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	map<int, int> m1;
	int num;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		if(num > 0)
			m1[num]++;
	}

	int a = 1;
	while(m1[a] != 0)
	{
		a++;
	}
	printf("%d", a);

	return 0;
}