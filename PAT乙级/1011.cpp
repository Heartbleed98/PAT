
#include <iostream>
using namespace std;
 
int main()
{
	int T = 0;
	cin >> T;
	double a=0, b=0, c=0;
	string flag = "";
	for (int i = 1 ; i <= T ; i++)
	{
		cin >> a >> b >> c;
		if (a+b > c) flag = "true";
		else flag = "false" ;
		cout <<"Case #"<<i<<": "<<flag << endl;
	}
	return 0;
}
