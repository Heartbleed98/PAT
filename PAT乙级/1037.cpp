/*
格式化输入的方法
计算找零钱的方法：将数据转换为最小单位来计算
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    
	int g1,g2,g3,s1,s2,s3,k1,k2,k3;
	scanf("%d.%d.%d %d.%d.%d",&g1,&s1,&k1,&g2,&s2,&k2);

	long sum1=(k1+s1*29+g1*29*17);//应付的价钱
	long sum2=(k2+s2*29+g2*29*17);//实际付的价钱
	long cha=sum2-sum1;//差价
	g3=cha/(17*29);
	s3=(cha-g3*17*29)/29;
	k3=(cha-g3*17*29-s3*29);
	if(cha>0){
		printf("%d.%d.%d",g3,s3,k3);
	}else{
      //三个数都会为负数
	  printf("-%d.%d.%d",abs(g3),abs(s3),abs(k3));//先输负号，输出绝对值 
	}
	return 0; 
}
