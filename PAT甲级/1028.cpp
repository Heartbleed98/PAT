#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

struct node {
    int ID;
    string name;
    int grade;
};

bool cmp1(node n1, node n2)
{
    return n1.ID < n2.ID;
}
bool cmp2(node n1, node n2)
{
    if(n1.name != n2.name)
        return (n1.name < n2.name);
    else
        return (n1.ID < n2.ID);
}
bool cmp3(node n1, node n2)
{
    if(n1.grade != n2.grade)
        return (n1.grade < n2.grade);
    else if(n1.name != n2.name)
        return (n1.name > n2.name);
    else
        return (n1.ID < n2.ID);
}

int main()
{
    int n, c;
    scanf("%d%d", &n,&c);

    vector<node> v1;
    for(int i = 0; i < n; i++)
    {
        int id, grade;
        string name;
        cin>>id>>name>>grade;
        node n1 = {id, name, grade};
        v1.push_back(n1);
    }

    if(c == 1)
    {
        sort(v1.begin(), v1.end(), cmp1);
    }
    if(c == 2)
    {
        sort(v1.begin(), v1.end(), cmp2);
    }
    if(c == 3)
    {
        sort(v1.begin(), v1.end(), cmp3);
    }

    for(int i = 0; i < v1.size(); i++)
    {
        cout<<setw(6)<<setfill('0')<<v1[i].ID<<" "<<v1[i].name<<" "<<v1[i].grade<<endl;
    }

    return 0;
}