/*
注意scanf的格式化输入字符串
*/ 
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

struct Time {
	int hour;
	int minute;
	int second;
};

struct record{
	string ID;
	Time sign_in;
	Time sign_out;
};

bool cmpMinTime(Time t1, Time t2)
{
	if(t1.hour != t2.hour)
		return (t1.hour < t2.hour) ? true : false;
	else if(t1.minute != t2.minute)
		return (t1.minute < t2.minute) ? true : false;
	else if(t1.second != t2.second) 
		return (t1.second < t2.second)? true : false;
}

bool cmpMaxTime(Time t1, Time t2)
{
	if(t1.hour != t2.hour)
		return (t1.hour > t2.hour) ? true : false;
	else if(t1.minute != t2.minute)
		return (t1.minute > t2.minute) ? true : false;
	else if(t1.second != t2.second) 
		return (t1.second > t2.second) ? true : false;
}

int main()
{
	int m;
	scanf("%d", &m);
	
	string ID_tmp;
	int hr1, mn1, sc1;
	int hr2, mn2, sc2;
	Time tmp1{23, 59, 59}, tmp2{0, 0, 0};
	string minID, maxID;
	for(int i = 0; i < m; i++)
	{
		cin>>ID_tmp; 
		scanf(" %d:%d:%d %d:%d:%d", &hr1,&mn1,&sc1,&hr2,&mn2,&sc2);
		Time t1{hr1, mn1, sc1};
		Time t2{hr2, mn2, sc2};

		if(cmpMinTime(t1, tmp1))
		{
			tmp1 = t1;
			minID = ID_tmp;
		}
		if(cmpMaxTime(t2, tmp2))
		{
			tmp2 = t2;
			maxID = ID_tmp;
		}
	}


	cout<<minID<<" "<<maxID<<endl;
	return 0;
}

