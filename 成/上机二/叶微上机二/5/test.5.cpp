/***************************************
File name:    test5 
last update:  2017.11.03 
function:     »ØÎÄÊı 
author:       yewei
****************************************/
#include<stdio.h>
int f(long m){
  int i,j,n[10],t=1;
  for(i=0;i<10;i++){
  	n[i]=0;
  }
  i=0;
  while(m!=0){
  	n[i]=m%10; m/=10; i++;
  }
  i--;
  for(j=0;j<i/2;j++) {
  	if (n[j]!=n[i-j]) t=0;
  }
  return t;
}

int main()
{
	long i;
    for(i=11;i<=999;i++){
    	if(f(i) && f(i*i) && f(i*i*i))
	    printf("%d\t",i);
	}
	return 0;	
} 
 
 
