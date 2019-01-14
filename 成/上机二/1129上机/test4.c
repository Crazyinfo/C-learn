/***************************************
File name:    test4.c
last update:  
function:     
author:       
****************************************/

#include <stdio.h>
#define MAX  20
int a[MAX], b[MAX], cnt = 0 ;

void jsVal()
{
//请在这里输入函数内容！！


 
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

