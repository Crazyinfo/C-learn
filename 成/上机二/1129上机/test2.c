/***************************************
File name:    test2.c
last update:  
function:     
author:       
****************************************/


#include <stdio.h>
#include <string.h>
#include <conio.h>

int aa[20],bb[10];

void jsSort()
{
//�����������뺯�����ݣ���

 

}



void main()
{
 readDat();
 jsSort();
 writeDat();
}

readDat()
 {
  FILE *in;
  int i;

  in=fopen("in2.dat","r");
  for(i=0; i<20; i++) fscanf(in,"%d,",&aa[i]);
  fclose(in);
  }

writeDat()
{
 FILE *out;
 int i;

 system("cls");
 out=fopen("out2.dat","w");
 for(i=0; i<10; i++){
   printf(" %d",bb[i]);
   fprintf(out,"%d\n",bb[i]);
 }
 fclose(out);
}

