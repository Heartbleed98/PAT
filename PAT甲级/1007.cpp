// 求最大子序列和，并输出该子序列的首元素和最后一个元素
// （若最大子序列和为负数，则输出0，序列的第一个元素和最后一个元素
#include <iostream>
#include <vector>
#include<math.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    vector<int> nums(n);
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int currSum = nums[0], maxSum = nums[0];
    int a, b, A, B;
    for(int i = 1; i < nums.size(); i++)
    {
        if(nums[i] > currSum + nums[i])
        {
            a = b = i;
            currSum = nums[i];
        }
        else
        {
            b++;
            currSum = currSum + nums[i];
        }

        if(currSum > maxSum)
        {
            A = a;
            B = b;
            maxSum = currSum;
        }
    }
    if(maxSum < 0)
        printf("%d %d %d", 0, nums[0], nums[nums.size()-1]);
    else
        printf("%d %d %d", maxSum, nums[A], nums[B]);
    
	return 0;
}
