#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    string num1;
    int num2;
    cin>>num1>>num2;

    vector<int> result;
    int temp = 0;
    for(int i = 0; i < num1.size(); i++)
    {
        int n = num1[i] - '0';
        if(temp != 0)
            n = temp * 10 + n;
            
        if(n > num2)
        {
            result.push_back(n / num2) ;
            temp = n % num2;
        }
        else if(n == num2)
        {
            result.push_back(1);
            temp = 0;
        }
        else
        {
            if(i==0)
            {
                temp = n;
                continue;
            }    
            result.push_back(0) ;
            temp = n;
        }
    }

    for(int i = 0; i < result.size(); i++)
    {
        cout<<result[i];
    }
    cout<<" "<<temp;

    return 0;
}