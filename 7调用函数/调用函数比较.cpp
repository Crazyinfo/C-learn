#include<stdio.h>
  int main()
{
	int max(int x,int y);
	int a,b,c;
	scanf("%d%d",&a,&b);
    c=max(a,b);
	printf("%d",c);
	return 0;
 }
 int max(int x,int y)
 {
 	int z;
 	z=x>y ? x:y;
 	return (z);//return(x>y ? x:y) ;
  } 
//将调用函数放在后面时，应当在主函数中声明，如上的“int max(int x,int y);”。 
//将调用函数放在前面是，不需要以上的声明。 不需要在前面加“int max(int x,int y);”
