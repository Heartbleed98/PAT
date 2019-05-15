#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int main()
{
    int n1=0, n2=0, n3=0, n5=0, n4 = 0;
    int n1Counter = 0, n2Counter = 0, n3Counter = 0, n4Counter = 0, n5Counter = 0;
    int num, temp=0;
    cin>>num;
    
    vector<int> n2Vector;
    int counter = 1;
    double n4Sum = 0;
    
    for(int i =0; i < num; i++)
    {
        cin >> temp;
        if(temp % 10 == 0)
        {
            n1 += temp;
            n1Counter++;
        }
        else if(temp % 5 == 1)
        {
            n2Vector.push_back(temp);
            n2Counter++;           
        }
        else if(temp % 5 == 2)
            n3++;
        else if(temp % 5 == 3)
        {
            n4Counter++;
            n4Sum += temp;
        }    
        else if(temp % 5 == 4)
        {
            if(temp > n5)
                {
                    n5 = temp;
                    n5Counter++;
                }
        }
    }

    vector<int>::iterator ptr;
    for(ptr = n2Vector.begin(); ptr < n2Vector.end(); ptr++, counter++)
    {
        if(counter % 2 == 1)
            n2 += *ptr;
        else
            n2 -= *ptr;
    }

    if(n1Counter != 0)
        cout<<n1<<" ";
    else
        cout<<"N"<<" ";

    if(n2Counter != 0)
        cout<<n2<<" ";
    else
        cout<<"N"<<" ";
    
    if(n3 != 0)
        cout<<n3<<" ";
    else
        cout<<"N"<<" ";

    if(n4Counter != 0)
    {
        n4 = n4Sum/n4Counter;
        cout<<fixed<<setprecision(1)<<n4Sum/n4Counter<<" ";
    }
    else
        cout<<"N"<<" ";

    if(n5Counter != 0)
        cout<<n5;
    else
        cout<<"N";

    return 0;
}