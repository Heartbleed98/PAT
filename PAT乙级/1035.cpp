/*
插入排序和归并排序
注意归并排序
注意sort函数在其中的应用
注意sort函数的范围，第二个参数应该是最后一个需要排序的元素的位置再加一
*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int num;
    cin>>num;

    vector<int> input;
    vector<int> mid;

    for(int i = 0; i < num; i++)
    {
        int temp = 0;
        cin>>temp;
        input.push_back(temp);
    }

    for(int i = 0; i < num; i++)
    {
        int temp = 0;
        cin>>temp;
        mid.push_back(temp);
    }

    int key;
    bool is_insert = true;
    for(int i = 0; i < mid.size(); i++)
    {
        if(mid[i] <= mid[i+1])
        {
            continue;
        }
        else if(mid[i] > mid[i+1])
        {
            key = i+1;
            for(int j = i+1 ; j < mid.size(); j++)
            {
                if(mid[j] == input[j])
                {
                    continue;
                }
                else
                {
                    is_insert = false;
                    break;
                }
            }
            break;
        }
    }

    if(is_insert == true)
    {
        cout<<"Insertion Sort"<<endl;
        sort(input.begin(), input.begin() + key + 1);//注意sort函数的范围，第二个参数应该是最后一个需要排序的元素的位置再加一
    }
    else
    {
        cout<<"Merge Sort"<<endl;
        int k = 1, flag = 1;
        while(flag) {
            flag = 0;
            for (int i = 0; i < num; i++) {
                if (input[i] != mid[i])
                    flag = 1;
            }
            k = k * 2;
            for (int i = 0; i < num / k; i++)
                sort(input.begin() + i * k, input.begin() + (i + 1) * k);
            sort(input.begin() + num / k * k, input.begin() + num);
        }
    }
    for(int i = 0; i < input.size() - 1; i++)
    {
        cout<<input[i]<<" ";
    }
    cout<<input[input.size()-1];

    return 0;
}