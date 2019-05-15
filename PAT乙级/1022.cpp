#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
  int a, b, D;
  cin>>a>>b>>D;
  
  int temp = a + b;
  vector<int> result;
  while(temp != 0)
  {
    result.push_back(temp % D);
    temp = temp / D;
  }
  
  reverse(result.begin(), result.end());
  for(int i = 0; i < result.size(); i++)
  {
    cout<<result[i];
  }
  
  return 0;
}