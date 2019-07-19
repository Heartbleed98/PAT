#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main()
{
    int n1, n2;
    cin>>n1;
    vector<int> v1(n1);
    for(int i = 0; i < n1; i++)
    {
        cin>>v1[i];
    }

    cin>>n2;
    vector<int> v2(n2);
    for(int i = 0; i < n2; i++)
    {
        cin>>v2[i];
    }

    sort(v1.begin(), v1.end(), greater<int>());
    sort(v2.begin(), v2.end(), greater<int>());

    int result = 0;
    int flag;
    for(int i = 0, j = 0; i < v1.size(), j < v2.size(); i++, j++)
    {
        if(v1[i] > 0 && v2[j] > 0)
        {
            result += v1[i] * v2[j];
        }
        else if(v1[i] < 0)
        {
            flag = i;
            break;
        }
        else if(v2[j] < 0)
        {
            flag = j;
            break;
        }
    }

    int i = v1.size()-1, j = v2.size()-1;
    while(v1[i] < 0 && v2[j] < 0)
    {
        result += v1[i] * v2[j];
        i--;
        j--;
    }
    cout<<result<<endl;
    return 0;
}