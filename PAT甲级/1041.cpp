#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int arr[10001] = {0};
    vector<int> v1;
    int num;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        arr[num]++;
        v1.push_back(num);
    }

    int i;
    for(i = 0; i < v1.size(); i++)
    {
        if(arr[v1[i]] == 1)
        {
            cout<<v1[i]<<endl;
            return 0;
        }
    }

    if(i == v1.size())
    {
        cout<<"None"<<endl;
    }

    return 0;
}