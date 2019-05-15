#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

int Data[100000]={0};
int Next[100000]={0};
int List[100000]={0};
int temp = 0;

int main()
{
    int begin, num, K;
    cin>>begin>>num>>K;

    for(int i = 0; i < num; i++)
    {
        cin>>temp;
        cin>>Data[temp]>>Next[temp];
    }

    int sum = 0;
    while(begin != -1)
    {
        List[sum] = begin;
        sum++;
        begin = Next[begin];
    }
    
    for(int i = 0; i < (sum - sum % K); i += K)
    {
        reverse(List + i, List + i + K);
    }

    for (int i = 0; i < sum - 1; i++)
        cout<< setw(5) << setfill('0')<<List[i]<<" "<<Data[List[i]]<<" "<<setw(5) << setfill('0')<<List[i+1]<<endl;
    cout<< setw(5) << setfill('0')<<List[sum - 1]<<" "<<Data[List[sum - 1]]<<" "<<-1<<endl;

    return 0;
}