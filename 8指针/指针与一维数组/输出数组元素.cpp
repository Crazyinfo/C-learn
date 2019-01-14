 #include<stdio.h>
int main(){
	int *p,i,a[10];
	p=a;
	for(i=0;i<10;i++)
	  scanf("%d",&a[i]);  //scanf("%d",(p+i));或者在该循环后重新将指针变量p指向a[0] 
	printf("\n");
    for(i=0;i<10;i++,p++)  //for(i=0;i<10;i++)
	  printf("%d",*p);     //printf("%d",*p++);  可改写成这样，*p++或*（p++）相当于先实现*p的运算，再实现p自增1。 
	return 0;              //而*（++p）是指p先加1再取*p。 
}                          //++（*p）表示p所指向的元素加1 
