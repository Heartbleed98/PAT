#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name, number;
    string max_name, min_name, max_number, min_number;
    int n, max = 0, min = 100, score;
    char c;
    cin >> n;

    for(int i = 0; i < n; i++)
    {   
        cin >> name >> number >> score;
        if(score > max)
        {
            max = score;
            max_name = name;
            max_number = number;
        }    
        if(score < min)
        {
            min = score;
            min_name = name;
            min_number = number;
        }
    }

    cout<<max_name<<" "<<max_number<<endl;
    cout<<min_name<<" "<<min_number<<endl;

    return 0;
}