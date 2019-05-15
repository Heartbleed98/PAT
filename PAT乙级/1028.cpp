//两种方法，另外一种不用写较长的if语句
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int num;
    cin>>num;

    string name, max_name, min_name;
    int year, month, day;
    int max_year = 0, max_month = 0, max_day = 0;
    int min_year = 9999, min_month = 999, min_day = 999;
    int count = 0;
    for(int i = 0; i < num; i++)
    {
        cin>>name;
        scanf("%d/%d/%d",&year, &month, &day);        
        if((year < 2014 || (year == 2014 && month < 9) || (year == 2014 && month == 9 && day <= 6))
            && (year > 1814 || (year == 1814 && month > 9) || (year == 1814 && month == 9 && day >= 6)))
        {
            if(year > max_year ||(year == max_year && month > 9) || (year == max_year && month == max_month && day > max_day))
            {
                max_name = name;
                max_year = year;
                max_month = month;
                max_day = day;
            }
            if(year < min_year ||(year == min_year && month < 9) || (year == min_year && month == min_month && day < min_day))
            {
                min_name = name;
                min_year = year;
                min_month = month;
                min_day = day;
            }
            count++;
        }
    }
    cout<<count<<" "<<min_name<<" "<<max_name;

    return 0;
}