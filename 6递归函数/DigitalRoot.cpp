/*����n�����ָ������¶���ģ�����һ���������������ֵĺͣ�
������ӣ�ֱ��ֻʣ��һλ����Ϊֹ�����磺1729��digital root
�������µĲ�����㣺
step 1:    1+7+2+9   ----->  19
step 2:    1+9           ----->  10
step 3:    1+0           ------>  1
��Ϊ�������Ľ����1������1�������ָ���ֵ��*/ 
#include<stdio.h>
int DigitSum(int n){
	if(n<10)
	   return n;
	else
	   return (n%10+DigitSum(n/10));
}

int DigitalRoot(int m){
	if(m<10)
	   return m;
	else
	   return DigitalRoot(DigitSum(m)); 
}

int main(){
	printf("%d",DigitalRoot(1729));
	return 0;
}
