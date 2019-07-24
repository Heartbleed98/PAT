#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int k;
    scanf("%d", &k);

    int num;
    vector<int> v1;
    int a = 0;
    while(a < 54)
    {
        cin>>num;
        v1.push_back(num);
        a++;
    }

    int s = v1.size();
    vector<string> v2(s);
    // for(int i = 1; i < s; i++)
    // {
    //     cout<<v1[i]<<" ";
    // }

    for(int i = 0; i < s; i++)
    {
        int result = v1[i];
        for(int j = 0; j < k - 1; j++)
        {
            result = v1[result - 1];
        }
        string str = "";
        if(i / 13 == 0)
        {
            str += "S";
        }
        else if(i / 13 == 1)
        {
            str += "H";
        }
        else if(i / 13 == 2)
        {
            str += "C";
        }
        else if(i / 13 == 3)
        {
            str += "D";
        }
        else if(i / 13 == 4)
        {
            str += "J";
        }
        str += to_string(i % 13 + 1);
        v2[result - 1] = str;
    }

    for(int i = 0; i < v2.size(); i++)
    {
        if(i != 0) cout<<" ";
        cout<<v2[i];
    }
    return 0;
}