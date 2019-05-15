#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

typedef struct{
        int No;
        int De;
        int Cai;
        int cate;
    }student;

bool compare(student, student);

int main()
{
    int num, L, H;
    cin>>num>>L>>H;
    
    vector<student> v;

    int tempNo;
    int tempDe, tempCai, tempCate;
    int M = num;
    for(int i = 0; i < num; i++)
    {
        cin>>tempNo>>tempDe>>tempCai;
        if(tempDe >= L && tempCai >= L)
        {
            if(tempDe >= H && tempCai >= H)
                tempCate = 1;
            else if(tempDe >= H && tempCai < H)
                tempCate = 2;
            else if(tempDe < H && tempCai < H && tempDe >= tempCai)
                tempCate = 3;
            else
                tempCate = 4;
        }
        else 
        {
            tempCate = 0;
            M--;
        }
        student stu = {
            tempNo,
            tempDe,
            tempCai,
            tempCate,
        };
        v.push_back(stu);
    }

    cout<<M<<endl;
    sort(v.begin(), v.end(), compare);
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i].cate == 0)
            continue;
        cout<<v[i].No<<" "<<v[i].De<<" "<<v[i].Cai<<endl;
    }

    return 0;
}

bool compare(student stu1, student stu2)
{
    if(stu1.cate < stu2.cate)
        return true;
    else if(stu1.cate == stu2.cate)
    {
        if((stu1.De + stu1.Cai) > (stu2.De + stu2.Cai))
            return true;
        else if((stu1.De + stu1.Cai) < (stu2.De + stu2.Cai))
            return false;
        else
        {
            if(stu1.De > stu2.De)
                return true;
            else if(stu1.De == stu2.De)
                return (stu1.No < stu2.No);
            else
                return false;
        }
    }
    else
        return false;
}