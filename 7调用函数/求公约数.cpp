#include<stdio.h>
int gcd(int m,int n){
	if(m%n==0)
	    return n;
	else
		return gcd(n,m%n);
}
int main(){
	printf("%d\n",gcd(18,4));
	return 0;
}

//�õ���ʹ�õ���ŷ����ù�ʽ 
