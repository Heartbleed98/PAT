/*
map的建立和初始化
注意循环的变量（i, j）
*/
#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

int main()
{
    map<int, char> m = {
        {0,'1'}, {1,'0'}, {2,'X'}, {3,'9'}, {4,'8'},
        {5,'7'}, {6,'6'}, {7,'5'}, {8,'4'}, {9,'3'}, {10,'2'}
    };
    int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};

    int num;
    cin>>num;

    vector<string> v;
    string temp_str;
    for(int i = 0; i < num; i++)
    {
        cin>>temp_str;
        int temp = 0;
        bool is_correct = true;
        for(int j = 0; j < temp_str.size() - 1; j++)
        {
            if(!(temp_str[j] >= '0' && temp_str[j] <= '9'))
            {
                is_correct = false;
                v.push_back(temp_str);
                
                break;
            }
            temp += (temp_str[j] - '0') * weight[j];
        }
        if(is_correct == true)
        {
            int Z = temp % 11;
            char M = temp_str[17];
            if(m[Z] != M)
            {

                v.push_back(temp_str);
            }
        }
    }

    if(v.size() == 0)
    {
        cout<<"All passed";
    }
    else
    {
        for(int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<endl;
        }
    }
    
    

    return 0;
}