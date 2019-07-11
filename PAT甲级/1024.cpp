#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool isPNum(string num)
{
	int size = num.size();
	for(int i = 0; i < size / 2; i++)
	{
		if(num[i] != num[size-1-i])
			return false;
	}
	return true;
}

//8721 + 1278

int main()
{
	string num;
	int n, step = 0;
	bool findPNum = false;
	string tmp_str = "";
	cin>>num>>n;
	for(int i = 0; i < n; i++)
	{
		if(!isPNum(num))
		{
			tmp_str.clear();
			int carry = 0, s = num.size();
			for(int j = 0; j < s; j++)
			{
				int tmp = (num[j] - '0') + (num[s-1-j] - '0') + carry;
				if(tmp >= 10)
				{
					tmp -= 10;
					carry = 1;
				}
				else
					carry = 0;	
				tmp_str.push_back(tmp + '0');		
			}
			if(carry == 1) 
				tmp_str.push_back('1');
    		reverse(tmp_str.begin(), tmp_str.end());
    		num = tmp_str;
			step++;
		}
		else
		{
			findPNum = true;
			break;
		}
	}
	
	cout<<num<<endl;
	cout<<step<<endl;

	return 0;	
 } 