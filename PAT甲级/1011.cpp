#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printResult(int i)
{
  if(i == 0)
    cout<<"W ";
  else if(i == 1)
    cout<<"T ";
  else 
    cout<<"L ";
}

int main()
{
  double max1 = 0, max2 = 0, max3 = 0;
  double tmp1 = 0;
  int tmp2 = 0;
  for(int i = 0; i < 3; i++)
  {
    cin>>tmp1;
    if(tmp1 > max1) 
    {
      max1 = tmp1;
      tmp2 = i;
    }
  }
  printResult(tmp2);
  
  for(int i = 0; i < 3; i++)
  {
    cin>>tmp1;
    if(tmp1 > max2) 
    {
      max2 = tmp1;
      tmp2 = i;
    }
  }
  printResult(tmp2);
  
  for(int i = 0; i < 3; i++)
  {
    cin>>tmp1;
    if(tmp1 > max3) 
    {
      max3 = tmp1;
      tmp2 = i;
    }
  }
  printResult(tmp2);
  
  double money = (max1 * max2 * max3 * 0.65 - 1) * 2;
  cout<<money<<endl;
  
  
  return 0;
}
