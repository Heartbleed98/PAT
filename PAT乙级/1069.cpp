/*
����ʹ��map���ݽṹ�����Դ洢���ݵĸ�����Ϣ���˴�ʹ��map<string, int>��int�������ж�ĳ�������Ƿ��Ѿ��й��� 
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
