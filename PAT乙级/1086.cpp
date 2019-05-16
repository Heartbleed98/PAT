#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int a, b, result;
	int i = 0;
	scanf("%d%d", &a,&b);
	result = a * b;
	string res = to_string(result);
	reverse(res.begin(), res.end());

	if(res[0] == '0')
	{
	  while(res[i] == '0')
	  {
	  	++i;
	  }
	}

	for(; i < res.size(); i++)
	{
		cout<<res[i];
	}

	return 0;
}

