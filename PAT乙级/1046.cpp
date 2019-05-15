/*
5min
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int num;
    cin>>num;

    int say1, show1, say2, show2;
    int lost1 = 0, lost2 = 0;
    for(int i = 0; i < num; i++)
    {
        cin>>say1>>show1>>say2>>show2;\
        if(show1 == say1 + say2 && show2 != say1 + say2)
        {
            lost2++;
        }
        else if(show2 == say1 + say2 && show1 != say1 + say2)
        {
            lost1++;
        }
    }

    cout<<lost1<<" "<<lost2;

    return 0;
}