#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

struct Data{
	string name;
	int month; 
	int day;
	int hour;
	int min;
	int time;
	string status;
}; 


bool cmp(Data d1, Data d2)
{
	return d1.name != d2.name ? d1.name < d2.name : d1.time < d2.time;
}

double billFromZero(Data call, int *rate) {
    double total = rate[call.hour] * call.min + rate[24] * 60 * call.day;
    for (int i = 0; i < call.hour; i++)
        total += rate[i] * 60;
    return total / 100.0;
}


vector<int> v1(24);
vector<Data> v2;

int main()
{
	int rate[25] = {0}, n;
    for (int i = 0; i < 24; i++) {
        scanf("%d", &rate[i]);
        rate[24] += rate[i];
    }
	
	cin>>n;
	
	string name;
	int month, day, hour, min, time;
	string status;
	for(int i = 0; i < n; i++)
	{
		cin>>name;
		scanf("%d:%d:%d:%d", &month, &day, &hour, &min);
		cin>>status;
		time = day * 24 * 60 + hour * 60 + min;
		Data d1{name, month, day, hour, min, time, status};
		v2.push_back(d1);
	}
	
	sort(v2.begin(), v2.end(), cmp);
	
	map<string, vector<Data> > m1;
	for(int i = 1; i < n; i++)
	{
		if(v2[i].name == v2[i-1].name && v2[i-1].status == "on-line" && v2[i].status == "off-line")
		{
			m1[v2[i-1].name].push_back(v2[i-1]);
			m1[v2[i].name].push_back(v2[i]);
		}
	}
	
	
	for(auto it = m1.begin(); it != m1.end(); it++)
	{
		vector<Data> tmp = it->second;
		cout<<it->first;
		printf(" %02d\n", tmp[0].month);
		double total = 0.0;
        for (int i = 1; i < tmp.size(); i += 2) {
            double t = billFromZero(tmp[i], rate) - billFromZero(tmp[i - 1], rate);
            printf("%02d:%02d:%02d %02d:%02d:%02d %d $%.2f\n", tmp[i - 1].day, tmp[i - 1].hour, tmp[i - 1].min, tmp[i].day, tmp[i].hour, tmp[i].min, tmp[i].time - tmp[i - 1].time, t);
            total += t;
        }
        printf("Total amount: $%.2f\n", total);
	}

	return 0;
}

