/*
20min
map的初始化
找最大值
*/
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    int num;
    cin>>num;

    map<int,vector<int>> m;
    for(int i = 0; i < num; i++)
    {
        int id, score;
        cin>>id>>score;
        m[id].push_back(score);
    }

    auto it = m.begin();
    int max = 0, count = 0, c = 0;
    while(it != m.end())
    {
        int temp = 0;
        for(int i = 0; i < it->second.size(); i++)
        {
            temp += it->second[i];
        }
        if(temp > max)
        {
            max = temp;
            c = count+1;
        }
        ++it;
        ++count;
    }

    cout<<c<<" "<<max;
    return 0;
}
