/*
struct内的变量不一定要全部都先初始化，可以只初始化一部分。
如：
struct node{
    int n1;
    int n2;
};
初始化的时候可以只初始化n1不初始化n2，此时n2默认为0
 */
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

struct student{
    long long int no;
    int score, final_rank, local_rank, location;
};

bool cmp(student a, student b) {
    return a.score != b.score ? a.score > b.score : a.no < b.no;
}

int main()
{
    int n, k;
    scanf("%d", &n);

    vector<student> FINAL;

    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &k);
        vector<student> v1(k);
        for(int j = 0; j < k; j++)
        {
            scanf("%lld %d", &v1[j].no, &v1[j].score);
            v1[j].location = i;
        }
        sort(v1.begin(), v1.end(), cmp);
        v1[0].local_rank = 1;
        FINAL.push_back(v1[0]);
        for(int j = 1; j < k; j++)
        {
            v1[j].local_rank = (v1[j].score == v1[j-1].score) ? v1[j-1].local_rank : (j + 1);
            FINAL.push_back(v1[j]);
        }
    }

    sort(FINAL.begin(), FINAL.end(), cmp);
    FINAL[0].final_rank = 1;
    for(int i = 1; i < FINAL.size(); i++)
    {
        FINAL[i].final_rank = (FINAL[i].score == FINAL[i-1].score) ? FINAL[i-1].final_rank : (i + 1);
    }
    printf("%d\n", FINAL.size());
    for(int i = 0; i < FINAL.size(); i++)
    {
        printf("%013lld %d %d %d\n", FINAL[i].no, FINAL[i].final_rank, FINAL[i].location, FINAL[i].local_rank);
    }

    return 0;
}