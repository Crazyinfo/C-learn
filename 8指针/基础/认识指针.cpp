#include<stdio.h>
int main()
{
	int *pointer_1; int *pointer_2; 
	int a,b;
	a=3;b=5;
	pointer_1=&a;pointer_2=&b;
	printf("%d %d\n",a,b);
	printf("%d %d\n",pointer_1,pointer_2);    //3 5 
	printf("%d %d",*pointer_1,*pointer_2);  //6618684 66186803
	return 0;
}
