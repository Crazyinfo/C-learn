#include<stdio.h>
int age(int n){
	int a;
	if(n==1)
	   a=10;
	else
	   a=age(n-1)+2;
	return a;
}
int main(){
	int i; 
	for(i=1;i<=5;i++){
		printf("第%d个人的年龄为：%d\n",i,age(i));
	} 
	return 0;
}
