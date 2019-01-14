/*整数n的数字根是如下定义的：它是一个整数的所有数字的和，
反复相加，直到只剩下一位数字为止。例如：1729的digital root
按照如下的步骤计算：
step 1:    1+7+2+9   ----->  19
step 2:    1+9           ----->  10
step 3:    1+0           ------>  1
因为第三步的结果是1，所以1就是数字根的值。*/ 
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
