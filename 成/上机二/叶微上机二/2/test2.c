/***************************************
File name:    test2
last update:  2017.12.03 
function:     —°»°≈≈¡– 
author:       yewei 
****************************************/
#include <stdio.h>
#include <string.h>
#include <conio.h>

int aa[20],bb[10];

void jsSort()
{int i,j,t;
for(i=0;i<20;i++){
	for(j=i+1;j<20;j++){
	  if(aa[i]%1000>aa[j]%1000){
	    t=aa[j];aa[j]=aa[i];aa[i]=t;
	  }
	  else if(aa[j]%1000==aa[i]%1000&&aa[i]<aa[j]){
	    t=aa[j];aa[j]=aa[i];aa[i]=t;
	  }
    }
}
for(i=0;i<10;i++){
	bb[i]=aa[i];
}
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

