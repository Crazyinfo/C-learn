#include<stdio.h>
void swap(int *p1,int *p2) {
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
void exchange(int *p1,int *p2,int *p3){
	if(*p1>*p2) swap(p1,p2);
	if(*p1>*p3) swap(p1,p3);
	if(*p2>*p3) swap(p2,p3);
}
int main(){
	int *pointer_1,*pointer_2,*pointer_3;
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	pointer_1=&a;pointer_2=&b;pointer_3=&c;
	exchange(pointer_1,pointer_2,pointer_3);
	printf("%d %d %d\n",a,b,c);
	return 0;
}
