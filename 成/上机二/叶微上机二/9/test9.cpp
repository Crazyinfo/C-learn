/***************************************
File name:    test4
last update:  2017.12.03 
function:     ÌæÈ¥µô*ºÅ 
author:       yewei 
****************************************/
#include<stdio.h>
#include<string.h>
void fun(char a[])
{
int n=0,m=0,i,j;
while(a[n]!='\0') n++;
for(i=0;i<n;i++){
	if(a[i]=='*'){
		a[i]='\0';
		for(j=i;j<n;j++){
			a[j]=a[j+1];
		}
		i--;
	}
}
}
int main()
{
char str[80];
gets(str);
fun(str);
puts(str);
return 0;
} 
