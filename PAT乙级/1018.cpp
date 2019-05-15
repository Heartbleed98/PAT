#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

int main()
{
    int num;
    cin>>num;

    char a, b;
    int result1[3] = {0};
    int result2[3] = {0};
    map<char, size_t> map1;
    map<char, size_t> map2;
    for(int i = 0; i < num; i++)
    {
        cin>>a>>b;
        if(a < b)
        {
            //a lose, b win
            if((int)b == 74 && (int)a == 66)
            {
                result1[2]++;
                result2[0]++;
                map2[b]++;
            }
            //a win, b lose
            else
            {
                result1[0]++;
                result2[2]++;
                map1[a]++;
            }
        }
        else if(a == b)
        {
            result1[1]++;
            result2[1]++;
        }
        else
        {
            //a win, b lose
            if((int)a == 74 && (int)b == 66)
            {
                result1[0]++;
                result2[2]++;
                map1[a]++;
            }
            //a lose, b win
            else
            {
                result1[2]++;
                result2[0]++;
                map2[b]++;
            }
        }
    }
    cout<<result1[0];
    for(int i = 1; i < 3; i++)
        cout<<" "<<result1[i];
    cout<<endl;
    cout<<result2[0];
    for(int i = 1; i < 3; i++)
        cout<<" "<<result2[i];
    cout<<endl;

    if(map1['B'] >= map1['C'] && map1['B'] >= map1['J'])
        cout<<'B'<<" ";
    else if(map1['C'] >= map1['J'])
        cout<<'C'<<" ";
    else cout<<'J'<<" ";

    if(map2['B'] >= map2['C'] && map2['B'] >= map2['J'])
        cout<<'B';
    else if(map2['C'] >= map2['J'])
        cout<<'C';
    else cout<<'J';
    
    return 0;
}









