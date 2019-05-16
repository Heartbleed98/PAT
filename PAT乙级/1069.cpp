/*
合理使用map数据结构，可以存储数据的附带信息，此处使用map<string, int>的int数据来判断某个数据是否已经中过奖 
*/ 
#include <iostream>
#include <map>
using namespace std;
int main() {
    int m, n, s;
    scanf("%d%d%d", &m, &n, &s);
    string str;
    map<string, int> m1;
    bool flag = false;
    for (int i = 1; i <= m; i++) {
        cin >> str;
        if (m1[str] == 1) s++; 
        if (i == s && m1[str] == 0) 
		{
            m1[str] = 1;
            cout << str << endl;
            flag = true;
            s = s + n;
        }
    }
    if (flag == false) cout << "Keep going...";
    return 0;
}
