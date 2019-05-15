/*
10min
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main()
{
    int N;
    cin>>N;

    string a1[1001];
    int a2[1001];

    string temp1;
    int temp2, temp3;
    for(int i = 0; i < N; i++)
    {
        cin>>temp1>>temp2>>temp3;
        a1[temp2] = temp1;
        a2[temp2] = temp3;
    }

    int M, temp;
    cin>>M;
    for(int i = 0; i < M; i++)
    {
        cin>>temp;
        cout<<a1[temp]<<" "<<a2[temp]<<endl;
    }

    return 0;
}