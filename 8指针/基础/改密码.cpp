#include<stdio.h>
void display(int *pwd){
    printf("����Ϊ%d\n",*pwd);
}
void updatePwd(int *pwd){
	int temp;
	printf("�������µ����룺"); 
	scanf("%d",&temp);
	*pwd=temp; 
}
int main(){
	int a=123456;
	int *password;
	password=&a;
	printf("δ�޸�ǰ��"); display(password);
	updatePwd(password);
	printf("�޸ĺ�"); display(password);
	return 0;
}
