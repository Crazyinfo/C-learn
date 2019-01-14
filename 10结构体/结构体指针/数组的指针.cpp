#include<stdio.h>
struct Student
{
	long num;
	char name[20];
	char sex;
	int score;
 }; 
struct Student stu[3]={{1,"L",'M',98},{2,"K",'M',78},{3,"B",'F',88}};

int main()
{
	struct Student *p;
	for(p=stu;p<stu+3;p++)
	{
		printf("%5d %-20s %2c %4d\n",p->num,p->name,p->sex,p->score);
	}
	return 0;
}
