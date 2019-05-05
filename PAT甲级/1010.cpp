#include<iostream>
#include<string>
#include<vector>
using namespace std;

int convert(string n, int radix)
{
	
}

int find_radix(string n, int num)
{
	
}

int main()
{
	string n1, n2;
	int tag, radix;
	cin>>n1>>n2>>tag>>radix;
	
	int result_radix = tag == 1 ? find_radix(n2, convert(n1, radix)) : find_radix(n1, convert(n2, radix));

	return 0;
}

