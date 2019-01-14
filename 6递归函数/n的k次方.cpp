#include<stdio.h>
int f(int n,int k){
	if(k==0)
	   return 1;
	if(k>=1)
	   return n*f(n,k-1);
} 
int main(){
	printf("%d",f(2,4));
	return 0;
}
