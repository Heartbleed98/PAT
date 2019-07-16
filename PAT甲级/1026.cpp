#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

struct node1{
    int comingTime;
    int playTime;
    int isVIP;
};
struct node2{
    int comingTime;
    int serveTime;
    int waitingTime;
};
struct table{
    int endTime = 28800;
    bool isVIP;
};

bool cmp(node1 n1, node1 n2)
{
    return (n1.comingTime < n2.comingTime);
}
bool cmp2(node2 n1, node2 n2)
{
    return (n1.serveTime < n2.serveTime);
}

int main()
{
    // 数据输入部分
    int n;
    scanf("%d", &n);

    vector<node1> v1;
    for(int i = 0; i < n; i++)
    {
        int hr, mn, sc, time, VIP;
        scanf("%d:%d:%d %d %d", &hr, &mn, &sc, &time, &VIP);
        int comingTime = hr * 3600 + mn * 60 + sc;
        node1 n1 = {comingTime, time * 60, VIP};
        v1.push_back(n1);
    }

    int k, m;
    scanf("%d%d", &k,&m);
    vector<table> tables(k);
    int x;
    for(int i = 0; i < m; i++)
    {
        scanf("%d", &x);
        tables[x].isVIP = true;
    }

    // 数据处理分析部分
    sort(v1.begin(), v1.end(), cmp);

    queue<node1> VIP;
    vector<node2> v2;

    for(int i = 0; i < v1.size(); i++)
    {
        int tmpIndex = 0, minFinish = tables[0].endTime;

        if(v1[i].isVIP == 0)
        {
            for(int j = 1; j < k; j++)
            {
                if(minFinish > tables[j].endTime)
                {
                    minFinish = tables[j].endTime;
                    tmpIndex = j;
                }
            }
        
        
            for(int j = 1; j < k; j++)
            {
                if(minFinish > tables[j].endTime && tables[j].isVIP == false)
                {
                    minFinish = tables[j].endTime;
                    tmpIndex = j;
                }
            }
            
            
            // 有空闲的桌子
            if(tables[tmpIndex].endTime <= v1[i].comingTime)
            {
                tables[tmpIndex].endTime = v1[i].comingTime + v1[i].playTime;
                node2 n2 = {v1[i].comingTime, v1[i].playTime, 0};
                v2.push_back(n2);
            }
            //没有空闲的桌子
            else
            {
                node2 n2 = {v1[i].comingTime, tables[tmpIndex].endTime, 0};
                tables[tmpIndex].endTime += v1[i].playTime;
                v2.push_back(n2);
            }

        }
        else
        {
            int minFinishVIP = 0, tmpIndexVIP;
            for(int j = 0; j < k; j++)
            {
                if(minFinish > tables[j].endTime && tables[j].isVIP == false)
                {
                    minFinish = tables[j].endTime;
                    tmpIndexVIP = j;
                }
                else if(minFinish > tables[j].endTime && tables[j].isVIP == true)
                {
                    minFinishVIP = tables[j].endTime;
                    tmpIndex = j;
                }
            }

            if(tables[minFinishVIP].endTime <= v1[i].comingTime)
            {
                tables[tmpIndexVIP].endTime = v1[i].comingTime + v1[i].playTime;
                node2 n2 = {v1[i].comingTime, v1[i].playTime, 1};
                v2.push_back(n2);
            }
            else if(tables[minFinish].endTime <= v1[i].comingTime)
            {
                tables[tmpIndex].endTime = v1[i].comingTime + v1[i].playTime;
                node2 n2 = {v1[i].comingTime, v1[i].playTime, 1};
                v2.push_back(n2);
            }
            else
            {
                node2 n2 = {v1[i].comingTime, tables[tmpIndex].endTime, 1};
                int tmp = (tmpIndex < tmpIndexVIP) ? tmpIndex : tmpIndexVIP;
                tables[tmp].endTime += v1[i].playTime;
                v2.push_back(n2);
            }   
        }
    }
    int num = v1.size();
    printf("%d", num);
    printf("@");
    sort(v2.begin(), v2.end(), cmp2);
    for(int i = 0; i < v2.size(); i++)
    {
        printf("%d%d\n", v2[i].comingTime, v2[i].serveTime);
    }

    return 0;
}