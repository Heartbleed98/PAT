#include<iostream>
#include<string>
#include<algorithm> 
#include<vector>
using namespace std;

int main()
{
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	bool arr[200] = {false};
	
	for(int i = 0; i < str2.size(); i++)
	{
		arr[str2[i]] = true;

	}	
	
	string new_str = "";
	for(int i = 0; i < str1.size(); i++)
	{
		if(arr[str1[i]] == true)
			continue;
		else
			new_str.push_back(str1[i]);
	}

	cout<<new_str<<endl;

	return 0;
}
