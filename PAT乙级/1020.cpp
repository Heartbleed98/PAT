#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<algorithm>
using namespace std;

typedef struct{
    double storage;
    double sum_price;
    double single_price;
}mooncake;

bool cp(mooncake, mooncake);

int main()
{
    int N, D;
    cin>>N>>D;

    mooncake* mc = new mooncake[N];
    double temp;
    for(int i = 0; i < N; i++)
    {
        cin>>temp;
        mc[i].storage = temp;
    }
    for(int i = 0; i < N; i++)
    {
        cin>>temp;
        mc[i].sum_price = temp;
    }
    double average = 0;
    for(int i = 0; i < N; i++)
    {
        average = mc[i].sum_price / mc[i].storage;
        mc[i].single_price = average;
    }

    sort(mc, mc+N, cp);
    double result = 0;
    for(int i = 0; i < N; i++)
    {
        if(D <= 0)
            break;
        if(mc[i].storage <= D)
        {
            result += mc[i].sum_price;
            D = D - mc[i].storage;
        }
        else
        {
            result += mc[i].single_price * D;
            break;
        }
    }
    cout<<fixed<<setprecision(2)<<result<<endl;
    return 0;
}

bool cp(mooncake a, mooncake b)
{
    if(a.single_price > b.single_price)
        return true;
    else
        return false;
}