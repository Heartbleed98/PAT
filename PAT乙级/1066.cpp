/*
��������ʱ��С���ܹ��������Ƕ�ά����
�����������λ��
*/ 
#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;

int main()
{
	int m, n, a, b, x;
	cin>>m>>n>>a>>b>>x;	
	//-Wl,--stack=9000000
	int picture[501][501] = {0};
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin>>picture[i][j];
		}
	}
	
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(j != 0) cout<<" ";
			if(picture[i][j] >= a && picture[i][j] <= b)
			{
				cout<<setw(3)<<setfill('0')<<x;
			}
			else
			{
				cout<<setw(3)<<setfill('0')<<picture[i][j];
			}
		}
		cout<<endl;
	}
	
	return 0;
} 
