#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a,&b,&c);

    char arr[13] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C'};
    vector<char> v1;
    vector<char> v2;
    vector<char> v3;
    if(a == 0)
    {
        v1.push_back('0');
        v1.push_back('0');
    }
    if(b == 0)
    {
        v2.push_back('0');
        v2.push_back('0');
    }
    if(c == 0)
    {
        v3.push_back('0');
        v3.push_back('0');
    }
    while(a != 0)
    {
        v1.push_back(arr[a%13]);
        a /= 13;
    }
    if(v1.size() < 2) v1.push_back('0');
    reverse(v1.begin(), v1.end());

    while(b != 0)
    {
        v2.push_back(arr[b%13]);
        b /= 13;
    }
    if(v2.size() < 2) v2.push_back('0');
    reverse(v2.begin(), v2.end());

    while(c != 0)
    {
        v3.push_back(arr[c%13]);
        c /= 13;
    }
    if(v3.size() < 2) v3.push_back('0');
    reverse(v3.begin(), v3.end());

    printf("#%c%c%c%c%c%c", v1[0], v1[1], v2[0], v2[1], v3[0], v3[1]);

    return 0;
}