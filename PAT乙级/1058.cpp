/*
注意vector的嵌套使用格式
vector在声明时指明了大小，则默认会用0填充 
*/ 
#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;

int main()
{
	int n, m;
	scanf("%d %d", &n,&m);
	
	vector<int> total, wrongCnt(m);
	vector<set<char> > correct(m);
	int temp1, temp2, temp3; 
	char temp4;
	for(int i = 0; i < m; i++)
	{
		
		scanf("%d %d %d", &temp1,&temp2,&temp3);
		total.push_back(temp1);
		for(int j = 0; j < temp3; j++)
		{
			scanf(" %c", &temp4);
			correct[i].insert(temp4);
		}
	}
	
	int temp5;
	for(int i = 0; i < n; i++)
	{
		int score = 0;
		scanf("\n");
		for(int j = 0; j < m; j++)
		{
			if(j != 0) scanf(" ");
			scanf("(%d", &temp5);
			set<char> st;
			for(int k = 0; k < temp5; k++)
			{
				scanf(" %c", &temp4);
				st.insert(temp4);
			}
			scanf(")");
			if(st==correct[j])
			{	
				score += total[j];
			}
			else
			{
				wrongCnt[j]++;
			}
		}
		printf("%d\n", score);
	}
	int maxWrongCnt = 0;
    for(int i = 0; i < m; i++) {
        if(wrongCnt[i] > maxWrongCnt) {
            maxWrongCnt = wrongCnt[i];
        }
    }
    if(maxWrongCnt == 0)
        printf("Too simple");
    else {
        printf("%d", maxWrongCnt);
        for(int i = 0; i < m; i++) {
            if(wrongCnt[i] == maxWrongCnt) {
                printf(" %d", i + 1);
            }
        }
    }
	return 0;	
} 
