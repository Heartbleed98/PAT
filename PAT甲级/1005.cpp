/*
ע����Ŀ������n�ķ�Χ���п���n�ر��
fib������д������̬�滮��
��7ȡ�࣬�õ��Ľ��ֻ��7�֣�7*7=49�������Ը��ݴ˼��ټ�����
*/ 
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int fib(int n, int a, int b)
{
	if(n == 1 || n == 2)
		return 1;
	int arr[50];
	arr[1] = 1;
	arr[2] = 1;
	for(int i = 3; i <= 49; i++)
	{
		arr[i] = (a * arr[i-1] + b * arr[i-2]) % 7; 
	}
	return arr[n];
}

int main()
{
	int a, b, n;
	while(cin>>a>>b>>n)
	{
		if(a == 0 && b == 0 && n == 0)
			break;
		else
		{
			n = n % 49;
			cout<<fib(n, a, b)<<endl;
		}
	}

	return 0;
}

