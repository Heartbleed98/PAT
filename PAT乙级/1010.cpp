#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;//存放输入的值
    vector<int> result;//存放输出的结果
    int n;
    int a, b;//系数，指数
    int flag = 0;
    while(cin>>n)
    {
        v.push_back(n);
        if (cin.get() == '\n') 
    		break;    
    }

    for(int i = 0; i < v.size(); i+=2)
    {
        // if(v[i]==0 && v[i+1]==0)
        // {
        //     a = 0;
        //     b = 0;
        //     result.push_back(a);
        //     result.push_back(b);
        // }
        if(v[i+1] == 0)
            continue;
        else 
        { 
            a = v[i] * v[i+1];
            b = v[i+1] - 1;
            
            result.push_back(a);
            result.push_back(b);
        }
    }

    if(v[0]==0&&v[1]==0)
        return 0;
    
        for(int i = 0; i < result.size() - 1; i++)
        {
            cout<<result[i]<<" ";
        }
        cout<<result[result.size() - 1];
        return 0;
    
}