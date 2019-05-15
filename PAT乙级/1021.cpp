#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  string str;
  cin>>str;
  
  int num[10] = {0};
  for(int i = 0; i < str.size(); i++)
  {
    num[str[i]-'0']++;
  }
  
  for(int i = 0; i < 10; i++)
  {
    if(num[i]==0)
      continue;
    else
    {
      cout<<i<<":"<<num[i]<<endl;
    }
  }
  
  return 0;
}