#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string str1;
	int n;
	cin>>str1>>n;
	string str2 = str1;
	
	
	for(int i = 1; i < n; i++)
	{
		if(str1.size() == 1)
		{
			str1.append("1");
			continue;
		}
		
		str2 = "";
		int count = 1;
		int size = str1.size();
		for(int j = 1; j < size; j++)
		{
			if(str1[j] == str1[j-1])
			{
				count++;
			}
			else if(str1[j] != str1[j-1])
			{
				str2.append(1,str1[j-1]);
				str2.append(to_string(count));
				count = 1;
			}
		}
		str2.append(1,str1[size-1]);
		str2.append(to_string(count));
		str1 = str2;
	}
	
	cout<<str1<<endl;

	return 0;
}

