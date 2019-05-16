/*
注意审题，题目没指明输入的密码字符串一定不包括空格
注意getline函数和getchar函数 
*/ 
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string password;
	int n;
	cin>>password>>n;
	
	string temp;
	int try_num = 0;
	int error_try_num = 0;
	getchar();
	while(1)
	{
	  getline(cin,temp);
		if(temp == "#")
		{
			break;
		}
		else if(temp == password && try_num <= n)
		{
			cout<<"Welcome in"<<endl;
			break;
		}
		else if(temp != password)
		{
			try_num++;
			error_try_num++;
			cout<<"Wrong password: "<<temp<<endl;
			if(error_try_num >= n) 
			{
				cout<<"Account locked"<<endl;
				break;	
			}
		}
	}

	return 0;
}

