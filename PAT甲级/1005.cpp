#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	string input;
	cin>>input;
	
	int sum = 0;
	string words[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	for(int i = 0; i < input.size(); i++)
	{
		sum += (input[i] - '0');	
	}
	string s = to_string(sum);
	for(int i = 0; i < s.size(); i++)
	{
		if(i != 0) cout<<" ";
		cout<<words[s[i] - '0'];
	}
	
	return 0;
}