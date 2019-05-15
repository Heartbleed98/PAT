/*
理清楚逻辑即可
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string str;
    cin>>str;

    ios_base::sync_with_stdio(false); 

    int array[6] = {0};
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == 'P')
            array[0]++;
        if(str[i] == 'A')
            array[1]++;
        if(str[i] == 'T')
            array[2]++;
        if(str[i] == 'e')
            array[3]++;
        if(str[i] == 's')
            array[4]++;
        if(str[i] == 't')
            array[5]++;
    }

    while(array[0] > 0 || array[1] > 0 || array[2] > 0 || array[3] > 0 || array[4] > 0 || array[5] > 0)
    {
        if(array[0]-- > 0) cout<<'P';
        if(array[1]-- > 0) cout<<'A';
        if(array[2]-- > 0) cout<<'T';
        if(array[3]-- > 0) cout<<'e';
        if(array[4]-- > 0) cout<<'s';
        if(array[5]-- > 0) cout<<'t';
    }
    return 0;
}