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
		printf("��%d���˵�����Ϊ��%d\n",i,age(i));
	} 
	return 0;
}
