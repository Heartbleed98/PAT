#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

struct node{
    char ch;
    int next;
};

node arr[100001];

int main()
{
    int start1, start2, n;
    scanf("%d%d%d", &start1,&start2, &n);
    for(int i = 0; i < n; i++)
    {
        int add, nt;
        char c;
        scanf("%d %c %d", &add, &c, &nt);
        node n1 = {c, nt};
        arr[add] = n1;
    }

    set<int> s1;

    int i1 = start1;
    while(i1 != -1)
    {
        s1.insert(i1);
        i1 = arr[i1].next;
    }

    int i2 = start2;
    while(i2 != -1)
    {
        if(s1.find(i2) != s1.end())
        {
            printf("%d", i2);
            return 0;
        }
        else
        {
            i2 = arr[i2].next;
        }
        
    }
    if(i2 == -1)
        printf("-1");

    return 0;
}