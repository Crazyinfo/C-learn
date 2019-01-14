/***************************************
File name:    test4
last update:  2017.12.03 
function:     次序放入数组
author:        yewei 
****************************************/

#include <stdio.h>
#define MAX  20
int a[MAX], b[MAX], cnt = 0 ;

void jsVal()//请在这里输入函数内容！！
{
	int i,j,k,m,t;
	j=0;
	for(i=0;i<20;i++){
		if(a[i]>a[i+1]&&a[i]>a[i+2]&&a[i]>a[i+3]&&a[i]>a[i+4]&&a[i]>a[i+5]&&(a[i]%2)!=0){
			cnt=cnt+1;
			b[j]=a[i];
			j=j+1;
			}
		}
	for(i=1;i<cnt;i++){
		for(j=0;j<cnt-1;j++){
			if(b[j]>b[i]){
			t=b[i];b[i]=b[j];b[j]=t;                         //将值给数组b 
		    }
		}
	}	
}

void readDat()
{
  int i ;
  FILE *fp ;
  fp = fopen("in4.dat", "r") ;
  for(i = 0 ; i < MAX ; i++) fscanf(fp, "%d", &a[i]) ;
  fclose(fp) ;
}

void main()
{
  int i ;
  readDat() ;
  jsVal() ;
  printf("满足条件的数=%d\n", cnt) ;
  for(i = 0 ; i < cnt ; i++) printf("%d ", b[i]) ;
  printf("\n") ;
  writeDat() ;
}

writeDat()
{
  FILE *fp ;
  int i ;
  fp = fopen("out4.dat", "w") ;
  fprintf(fp, "%d\n", cnt) ;
  for(i = 0 ; i < cnt ; i++) fprintf(fp, "%d\n", b[i]) ;
  fclose(fp) ;
}

