/*
应该进行 n % 3 == 0, 1, 2 的分类讨论
 */
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int n, n1, n2, n3; 
    n = str.size();
    int np = n + 2;

    if(np % 3 != 0)
    {
        n2 = np / 3 + 1;
    }
    else
    {
        n2 = np / 3;
    }

    if((np-n2) % 2 != 0)
        n2++;
    n1 = n3 = (np - n2) / 2;
    
    for(int i = 0; i < n1; i++)
    {
        cout<<str[i];
        if(i == (n1 -1))
        {
            int j = i + 1;
            int count = 0;
            while(count < (n2 - 2))
            {
                cout<<str[j];
                j++;
                count++;
            }
        }
        else
        {
            for(int j = 0; j < n2 - 2; j++)
            {
                cout<<" ";
            }
        }
        
        
        cout<<str[n-1-i]<<endl;;
    }

    return 0;
}
