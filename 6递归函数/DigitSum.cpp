/*дһ���ݹ麯��DigitSum(n)������һ���Ǹ�������
���������������֮�ͣ����磬����DigitSum(1729)��
��Ӧ�÷���1+7+2+9�����ĺ���19 */ 
#include<stdio.h>
int DigitSum(int n){
	if(n<10)
	   return n;
	else
	   return (n%10+DigitSum(n/10));
}
int main(){
	printf("%d",DigitSum(1729));
	return 0;
}
