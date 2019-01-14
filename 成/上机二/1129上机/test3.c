/***************************************
File name:    test3.c
last update:  
function:     
author:       
****************************************/

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

unsigned char xx[50][80];
int maxline=0;/*文章的总行数*/

int ReadDat(void);
void WriteDat(void);

void encryptChar()
{
	//请在这里输入函数内容！！
	
	
	
	
	
}

void main()
 {
 system("cls");
 if(ReadDat()){
  printf("数据文件ENG3.IN不能打开！\n\007");
  return;
 }
 encryptChar();
 WriteDat();
}

int ReadDat(void)
{
 FILE *fp;
 int i=0;
 unsigned char *p;

 if((fp=fopen("eng3.in","r"))==NULL) return 1;
 while(fgets(xx[i],80,fp)!=NULL){
   p=strchr(xx[i],'\n');
   if(p)*p=0;
   i++;
 }
maxline=i;
fclose(fp);
return 0;
}

void WriteDat(void)
{
 FILE *fp;
 int i;

 fp=fopen("ps3.dat","w");
 for(i=0;i<maxline;i++){
   printf("%s\n",xx[i]);
   fprintf(fp,"%s\n",xx[i]);
 }
 fclose(fp);
}

