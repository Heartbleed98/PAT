/*
20min
十进制转换到二进制
*/ 
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	
	int sum = 0;
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			sum += (str[i] - 96);
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			sum += (str[i] + 32 -96);
		}
	}
	
	vector<int> v1;
	int i = 0;
	while(sum != 0)
	{
		v1.push_back(sum % 2) ;
		i++;
		sum /= 2;
	}
	
	int count0 = 0, count1 = 0;
	for(int i = 0; i < v1.size(); i++)
	{
		if(v1[i] == 0)
			count0++;
		else
			count1++;
	}

	cout<<count0<<" "<<count1;
	return 0;
}
