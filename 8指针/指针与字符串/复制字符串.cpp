#include<stdio.h>
#include<string.h>
char cpystr(char *pss,char *pds){
	while((*pds=*pss)!='\0'){
		pds++;
		pss++;
	}
}
int main(){
	char *pa="China",*pb;
	cpystr(pa,pb);
	printf("%s",pb); 
}
