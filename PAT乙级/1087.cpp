#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;

int main()
{
	int n;
	set<int> s1;
	int tmp1, tmp2, tmp3, sum;
	scanf("%d", &n);

	for(double i = 1.0; i <= n; i = i + 1.0)
	{
		tmp1 = i / 2;
		tmp2 = i / 3;
		tmp3 = i / 5;
		sum = tmp1 + tmp2 + tmp3;
		s1.insert(sum);
	}
	cout<<s1.size()<<endl;
	return 0;
}

