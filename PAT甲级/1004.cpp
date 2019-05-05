#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

int main()
{
	int num;
	while(cin>>num)
	{
		if(num == 0) break;
		map<string, int> m1;
		string str;
		for(int i = 0; i < num; i++)
		{
			cin>>str;
			m1[str]++;
		}
		int max = 0;
		string max_color="";
		map<string, int>::iterator it = m1.begin();
		while(it != m1.end())
		{
			if(it->second > max)
			{
				max = it->second;
				max_color = it->first;
			}
			it++;
		}
		cout<<max_color<<endl;
	}

	return 0;
}

