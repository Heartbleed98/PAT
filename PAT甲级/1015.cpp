#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

bool isPrime(int n)
{
    if(n <= 1) return false;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int num, radix;
	
	while(scanf("%d", &num) != EOF)
	{
		if(num < 0) break;
		scanf("%d", &radix);
		
		
		if(!isPrime(num)) 
		{
			printf("No\n");
			continue;
		}
		
        vector<int> v1;
        while(num != 0)
        {
            v1.push_back(num % radix);
            num = num / radix;
        }

        reverse(v1.begin(), v1.end());
        int result = 0, exp = 0;
        for(int i = 0; i < v1.size(); i++)
        {
            result += v1[i] * pow(radix, exp);
            exp++;
        }
        
        //另一种n进制转换为十进制的方法 
        // int revNum = 0;
		// for(int i = 0; i < v1.size(); i++) {
		// 	revNum = revNum * radix + v1[i];
		// }
        
        if(isPrime(result)) printf("Yes\n");
        else printf("No\n");
        v1.clear();
		
	}

	return 0;
}

