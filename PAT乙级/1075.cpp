/*
注意这种链表的遍历方式
*/ 
#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct node {
	int data;
	int next;
};

int main()
{
	int start, num, k;
	scanf("%d%d%d", &start,&num,&k);
	
	
	node array[10000];
	int a, d, n;
	for(int i = 0; i < num; i++)
	{
		scanf("%d", &a);
		scanf("%d%d", &array[a].data,&array[a].next);
	} 
	
	vector<int> v[3];
	int p = start;
	while(p != -1)
	{
		int data = array[p].data;
		if (data < 0)
            v[0].push_back(p);
        else if (data >= 0 && data <= k)
            v[1].push_back(p);
        else
            v[2].push_back(p);
        p = array[p].next;
	}
	
	int flag = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            if (flag == 0) {
                printf("%05d %d ", v[i][j], array[v[i][j]].data);
                flag = 1;
            } else {
                printf("%05d\n%05d %d ", v[i][j], v[i][j], array[v[i][j]].data);
            }
        }
    }
    printf("-1");
    return 0;

	return 0;
}

