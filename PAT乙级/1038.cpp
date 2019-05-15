/*
20min
注意程序的运行时间，尽量不要嵌套循环
要统计某一个值在数组中出现的次数，可以将这个值作为下标存储在另一个数组中（Line 21）
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int num;
    cin>>num;

    int score[101] = {0};
    int temp;
    for(int i = 0; i < num; i++)
    {
        scanf("%d",&temp);
        score[temp]++;
    }

    int select_num;
    scanf("%d", &select_num);

    for(int i = 0; i < select_num; i++)
    {
        scanf("%d", &temp);
        if(i != 0)
            printf(" ");
        printf("%d", score[temp]);
    }

    return 0;
}