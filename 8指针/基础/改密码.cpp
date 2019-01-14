#include<stdio.h>
void display(int *pwd){
    printf("密码为%d\n",*pwd);
}
void updatePwd(int *pwd){
	int temp;
	printf("请输入新的密码："); 
	scanf("%d",&temp);
	*pwd=temp; 
}
int main(){
	int a=123456;
	int *password;
	password=&a;
	printf("未修改前："); display(password);
	updatePwd(password);
	printf("修改后："); display(password);
	return 0;
}
