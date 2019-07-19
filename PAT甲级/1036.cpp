#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    string name, id, name1, id1, name2, id2;
    char gender;
    int grade, grade1, grade2;
    int high = 0, low = 101;
    for(int i = 0; i < n; i++)
    {
        cin>>name>>gender>>id>>grade;
        if(gender == 'F')
        {
            if(grade > high)
            {
                high = grade;
                name1 = name;
                id1 = id;
                grade1 = grade;
            }
        }
        else if(gender == 'M')
        {
            if(grade < low)
            {
                low = grade;
                name2 = name;
                id2 = id;
                grade2 = grade;
            }
        }
    }

    int flag = 0;
    if(high != 0)
    {
        cout<<name1<<" "<<id1<<endl;
    }
    else
    {
        cout<<"Absent"<<endl;
        flag = 1;
    }

    if(low != 101)
    {
        cout<<name2<<" "<<id2<<endl;
    }
    else
    {
        cout<<"Absent"<<endl;
        flag = 1;
    }

    if(flag == 1)
    {
        cout<<"NA"<<endl;
    }
    else
    {
        cout<<grade1 - grade2<<endl;
    }
    
    
    

    return 0;
}