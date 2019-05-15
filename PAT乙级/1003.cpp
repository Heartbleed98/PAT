#include<iostream>
#include<string>
using namespace std;

int main()
{
    int number;
    cin >> number;
    char c;
    
    while(getchar() != '\n'); //跳过第一个输入值 

    for(int i = 0; i < number; i++)
    {
      int count[3] = {0, 0, 0};
      int pos = 0;
        while((c = getchar()) != '\n')
        {
            if(c == 'A')
                count[pos]++;
            else if(c == 'P' && pos == 0)
                pos = 1;
            else if(c == 'T'&& pos == 1)
                pos = 2;
            else
                break;
        }

        if(c == '\n' && pos == 2 && count[1] && count[2] == count[1] * count[0])
            puts("YES");
        else
            puts("NO");

        if(c != '\n') while((c = getchar()) != '\n');
    }

    return 0;
}