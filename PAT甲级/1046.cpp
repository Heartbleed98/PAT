#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n, m;
    cin>>n;

    vector<int> v1(n+1);
    int tmp, sum = 0;
    for(int i = 2; i < n+1; i++)
    {
        cin>>tmp;
        sum += tmp;
        v1[i] = sum;
    }
    cin>>tmp;
    v1[0] = tmp;
    v1[1] = 0;

    cin>>m;
    vector<int> v2;
    int n1, n2;
    v2.push_back(-1);
    for(int i = 0; i < m; i++)
    {
        cin>>n1>>n2;
        if(n1 > n2)
            swap(n1, n2);
        v2.push_back(n1);
        v2.push_back(n2);
    }

    for(int i = 1; i < v2.size(); i+=2)
    {
        if(v1[v2[i+1]] - v1[v2[i]] < v1[v2[i]] + v1[0] + (v1[n] - v1[v2[i+1]]))
            cout<<v1[v2[i+1]] - v1[v2[i]] <<endl;
        else
            cout<<v1[v2[i]] + v1[0] + (v1[n] - v1[v2[i+1]])<<endl;
    }
    return 0;
}