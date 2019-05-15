#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

bool isPrime(int);

int main()
{
    int a, b;
    int counter = 0;
    cin>>a>>b;
    vector<int> v;
    int x = INT_MAX;
    for(int i = 2; i <= x; i++)
    {
        if(isPrime(i))
        {
            counter++;
            if(counter >= a && counter <= b)
                v.push_back(i);
            if(counter > b)
                break;
        }    
    }

    for(int i = 0; i < v.size(); i++)
    {
        if((i+1) % 10 == 0 || i == v.size() - 1)
            cout<<v[i]<<endl;
        else
            cout<<v[i]<<" ";
    }
    return 0;
}

bool isPrime(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}