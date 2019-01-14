#include<stdio.h>
struct student
{
	int num;
	char name;
	int age;
	char adr;
};
int main()
{
	int a;
	a=sizeof(struct student);
	printf("%d",a);
	return 0;
}

