#include<stdio.h> 
void inv(int *x,int n)
{
	int *i,*j,temp,m=n/2;
	for(i=x,j=x+n-1;i<x+m;i++,j--)
	{
		temp=*i;*i=*j;*j=temp;
	}  
}
int main(){
	int i,a[10]={3,7,9,11,0,6,7,5,4,2};
	printf("The original array:\n");
	for(i=0;i<10;i++)
	  printf("%d ",a[i]);
	printf("\n");
	inv(a,10);
	printf("The array has been inverted:\n");
	for(i=0;i<10;i++)
	  printf("%d ",a[i]);
	  return 0; 
}
