#include<math.h>
#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    string pingyin[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

    int sum = 0;
    for(int i = 0; i < s.length(); i++)
        sum += s[i] - '0';
    
    string py = to_string(sum);
    for(int i = 0; i < py.length(); i++)
    {
        if (i != 0) cout << " ";
        cout<<pingyin[py[i] - '0'];
    }

    return 0;
}
