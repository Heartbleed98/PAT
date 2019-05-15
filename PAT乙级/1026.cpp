#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<cmath>
#define CLK_TCK 100.0
using namespace std;

int main()
{
    double c1, c2;
    cin>>c1>>c2;

    double seconds = (c2 - c1) / CLK_TCK;
    cout<<seconds<<endl;
    int hour, min;
    double sec;
    if(seconds >= 3600)
    {
        hour = seconds / 3600;
        seconds = seconds - hour * 3600;
    }
    if(seconds < 3600 && seconds >= 60)
    {
        min = seconds / 60;
        cout<<seconds<<endl;
        sec = seconds - min * 60;
    }
    
    cout<<setw(2)<<setfill('0')<<hour<<":"<<min<<":"<<round(sec)<<endl;

    return 0;
}