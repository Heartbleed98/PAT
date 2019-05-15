/*
15min
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int num;
    cin>>num;

    int score, team, player;
    int array[1001] = {0};
    for(int i = 0; i < num; i++)
    {
        scanf("%d-%d %d", &team, &player, &score);
        array[team] += score;
    }

    int max = 0;
    int result1, result2;
    for(int i = 0; i < 1001; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
            result1 = i;
            result2 = array[i];
        }
    }
    cout<<array[11]<<endl;
    cout<<result1<<" "<<result2;

    return 0;
}