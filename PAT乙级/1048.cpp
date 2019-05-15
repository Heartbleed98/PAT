/*
注意数字字符与它对应ASCII值是不相同的，不要混淆
往字符串后添加内容可以用append函数（string库）
*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    string A, B;
    cin>>A>>B;

    vector<char> result;
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    int lena = A.length(), lenb = B.length();
    int len = (A.size() >= B.size()) ? A.size() : B.size();

    if (lena > lenb)
        B.append(lena - lenb, '0');
    else
        A.append(lenb - lena, '0');

    char temp1, temp2;
    for(int i = 0; i < len; i++)
    {
        if((i+1) % 2 == 1)
        {
            temp1 = ((A[i] - '0') + (B[i] - '0')) % 13;
            if(temp1 == 10) {temp1 = 'J'; result.push_back(temp1);}
            else if(temp1 == 11) {temp1 = 'Q'; result.push_back(temp1);}
            else if(temp1 == 12) {temp1 = 'K'; result.push_back(temp1);}
            else 
            {
                result.push_back(temp1+48);
            }
        }
        else
        {
            temp2 = (B[i] - '0') - (A[i] - '0');
            if(temp2 < 0) temp2 += 10;
            result.push_back(temp2+48);
        }
    }

    reverse(result.begin(), result.end());
    for(int i = 0; i <result.size(); i++)
    {
        cout<<result[i];
    }

    return 0;
}