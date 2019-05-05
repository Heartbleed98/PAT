#include<iostream>
#include<string>
#include<vector>
using namespace std;

int cal(int n)
{
	int sum = 0;
	for(int i = n; i > 0; i--)
	{
		sum += i;
	}
	return sum;
}

int main()
{
	int input;
	while(cin>>input)
	{
		cout<<cal(input)<<endl;
		cout<<endl;
	}

	return 0;
}

