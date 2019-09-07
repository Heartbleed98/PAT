#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int a, b;
	scanf("%d%d", &a,&b);
	
	int sum = a + b;
	string str = to_string(sum);
	int size = str.size();
	if(sum >= 0)
	{
		for(int i = 0; i < size; i++)
		{
			if((size - i) % 3 == 0 && i != 0)
				cout<<",";
			cout<<str[i];
		}
	}
	else
	{
		cout<<"-";
		for(int i = 1; i < size; i++)
		{
			if((size - i) % 3 == 0 && i != 1)
				cout<<",";
			cout<<str[i];
		}
	}
	
	
	return 0;
}