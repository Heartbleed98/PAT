#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int num;
	string str;
	
	scanf("%d", &num);
	for(int i = 0; i < num; i++)
	{
		cin>>str;
		bool is_correct = true, have_num = false, have_abc = false;
		int size = str.size();
		
		if(size < 6)
			cout<<"Your password is tai duan le."<<endl;
		else 
		{
			for(int j = 0; j < size; j++)
			{
				if (!(str[j] >= 'A' && str[j] <= 'z') &&
					!(str[j] >= '0' && str[j] <= '9') &&
					str[j] != '.')
				{
					is_correct = false;
					break;
				}
				else if(str[j] >= 'A' && str[j] <= 'z')
				{
					have_abc = true;
				}
				else if(str[j] >= '0' && str[j] <= '9')
				{
					have_num = true;
				}
			}
			if(!is_correct)
				cout<<"Your password is tai luan le."<<endl;
			else if(!have_num)
				cout<<"Your password needs shu zi."<<endl;
			else if(!have_abc)
				cout<<"Your password needs zi mu."<<endl;
			
			else if(have_num && have_abc && is_correct)
				cout<<"Your password is wan mei."<<endl;
		}
	}

	return 0;
}

