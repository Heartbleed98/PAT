/*
排序后与原数组进行比较，当元素相同且比左边元素的最大值都大时则是主元
*/
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int num;
    cin>>num;

    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    int temp;
    for(int i = 0; i < num; i++)
    {
        cin>>temp;
        v1.push_back(temp);
        v2.push_back(temp);
    }

    sort(v2.begin(), v2.end());

    int count = 0, max = 0;
    for(int i = 0; i < num; i++)
    {
        if(v1[i] > max)
            max = v1[i];
        if(v1[i] == v2[i] && v1[i] == max)
        {
            count++;
            v3.push_back(v2[i]);
        }
    }

    cout<<count<<endl;
    for(int i = 0; i < v3.size(); i++)
    {
        if(i != 0) cout<<" ";
        cout<<v3[i];
    }

    return 0;
}