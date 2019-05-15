#include<iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;

int main()
{
    string num1, num2;
    int a, b;
    int count1 = 0, count2 = 0;
    cin>>num1>>a>>num2>>b;

    for(int i = 0; i < num1.size(); i++)
    {
        if(num1[i] - '0' == a)
            count1++;
    }

    for(int i = 0; i < num2.size(); i++)
    {
        if(num2[i] - '0' == b)
            count2++;
    }

    int result1 = 0;
    for(int i = 0; i < count1; i++)
    {
        result1 += a*pow(10,i);
    }

    int result2 = 0;
    for(int i = 0; i < count2; i++)
    {
        result2 += b*pow(10,i);
    }
    int res = result1 + result2;
    cout<<result1<<" "<<result2<<" "<<res<<endl;

    return 0;
}