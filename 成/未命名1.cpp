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
//���� 
typedef struct tagNode 
{
	Student stu;
	struct tagNode *pNext;//ָ����һ��ѧԺ 
}Node;

Node *g_pHead=NULL;
int main()
{
	printf("-------��ӭʹ��ѧ������ϵͳ-------\n");
	//��ѭ��
	while(1)
	{
		printf("��ѡ�����б�\n");
		printf("\t1.¼��ѧ����Ϣ\n");
		printf("\t2.��ӡѧ����Ϣ\n");
		printf("\t3.����ѧ����Ϣ\n");
		printf("\t4.��ȡѧ����Ϣ\n");
		printf("\t5.ͳ������ѧ������\n");
		printf("\t6.����ѧ����Ϣ\n");
		printf("\t7.�޸�ѧ����Ϣ\n");
		printf("\t8.ɾ��ѧ����Ϣ\n");
		printf("\t0.�˳�ϵͳ\n");
		//��ͣһ�� �������ַ� 
		char ch=getch();
		//getch�Ĺ��ܣ��ӱ�׼�����豸(����)����һ���ַ�,����������ʾ����.
		//getch������C������ʹ��ʱ�������ͷ�ļ�Ϊ conio.h 
		switch (ch)
		{
			case '1'://¼��ѧ����Ϣ 
			    void InputStudent()
				break;
			case '2'://��ӡѧ����Ϣ 
				break;
			case '3'://����ѧ����Ϣ 
				break;
			case '4'://��ȡѧ������ 
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
				printf("ByeBye ��ӭ�ٴ�ʹ��"); 
				return 0;
				break;
		    default:
		    	printf("���������������������\n"); 
		    	break;
		 } 
	 } 
}

void InputStudent()
{
	printf("������ѧ����Ϣ������ ѧ�� ���� �ɼ�")
}
