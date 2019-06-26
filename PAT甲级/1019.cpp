#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int n, base;
    scanf("%d%d", &n, &base);

    vector<int> v1;
    while(n != 0)
    {
        v1.push_back(n % base);
        n /= base;
    }
    reverse(v1.begin(), v1.end());

    bool isPNumber = true;
    size_t s = v1.size();
    for(int i = 0; i < s / 2; i++)
    {
        if(v1[i] != v1[s-1-i])
            isPNumber = false;
    }

    if(isPNumber == true)
    {
        printf("%s\n", "Yes");
        for(int i = 0; i < v1.size(); i++)
        {
            if(i == 0) printf("%d", v1[i]);
            else printf(" %d", v1[i]);
        }
    }
    else
    {
        printf("%s\n", "No");
        for(int i = 0; i < v1.size(); i++)
        {
            if(i == 0) printf("%d", v1[i]);
            else printf(" %d", v1[i]);
        }
    }
        

    return 0;
}
