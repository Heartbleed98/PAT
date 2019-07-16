#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct edge{
    int distance;
    int cost; 
};

edge graph[100][100];

int main()
{
    int n1, n2;
    scanf("%d", &n1);

    vector<long> v1(n1);
    for(int i = 0; i < n1; i++)
    {
        scanf("%ld", &v1[i]);
    } 

    scanf("%d", &n2);
    int mid = (n1 + n2 -1) / 2, i = 0, count = -1;
    long tmp;
    for(int j = 0; j < n2; j++)
    {
        scanf("%ld", &tmp);
        while(v1[i] < tmp)
        {
            count++;
            if(count == mid) 
                cout<<v1[i];
            i++;
        }
        count++;
        if(count == mid)
            cout<<tmp;
    }

    while(i < n1)
    {
        count++;
        if(count == mid)
            cout<<v1[i];
        i++;
    }

    return 0;
}