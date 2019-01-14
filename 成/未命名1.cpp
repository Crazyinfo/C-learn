#include<stdio.h>
#include<string.h>
#include<conio.h>
typedef struct tagstudent
{
	char szname[20];
	int nStuNum;
	int nAge;
	int nscore;
}Student;
//链表 
typedef struct tagNode 
{
	Student stu;
	struct tagNode *pNext;//指向下一个学院 
}Node;

Node *g_pHead=NULL;
int main()
{
	printf("-------欢迎使用学生管理系统-------\n");
	//死循环
	while(1)
	{
		printf("请选择功能列表\n");
		printf("\t1.录入学生信息\n");
		printf("\t2.打印学生信息\n");
		printf("\t3.保存学生信息\n");
		printf("\t4.读取学生信息\n");
		printf("\t5.统计所有学生人数\n");
		printf("\t6.查找学生信息\n");
		printf("\t7.修改学生信息\n");
		printf("\t8.删除学生信息\n");
		printf("\t0.退出系统\n");
		//暂停一下 ，输入字符 
		char ch=getch();
		//getch的功能：从标准输入设备(键盘)读入一个字符,不会显在显示器上.
		//getch函数在C语言中使用时需包含的头文件为 conio.h 
		switch (ch)
		{
			case '1'://录入学生信息 
			    void InputStudent()
				break;
			case '2'://打印学生信息 
				break;
			case '3'://保存学生信息 
				break;
			case '4'://读取学生信心 
				break;
			case '5':
				break;
			case '6':
				break;
			case '7':
				break;
			case '8':
				break;
			case '0':
				printf("ByeBye 欢迎再次使用"); 
				return 0;
				break;
		    default:
		    	printf("您输入的有误，请重新输入\n"); 
		    	break;
		 } 
	 } 
}

void InputStudent()
{
	printf("请输入学生信息：姓名 学号 年龄 成绩")
}
