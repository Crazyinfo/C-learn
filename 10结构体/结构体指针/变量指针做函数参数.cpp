#include<stdio.h>
#define N 3
struct Student
{
	int num;
	char name[20];
	int score[3];
	float aver;
};

void input(struct Student stu[])
{
	int i;
	printf("�������ѧ������Ϣ��ѧ�š����������ſγɼ���\n");
	for(i=0;i<N;i++)
	{
		scanf("%d %s %d %d %d",&stu[i].num,&stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
		stu[i].aver=(stu[i].score[1]+stu[i].score[2]+stu[i].score[0])/3.0;
	}
}

struct Student max(struct Student stu[])
{
	int i,m=0;
	for(i=0;i<N;i++)
	{
		if(stu[i].aver>stu[m].aver) m=i;
	}
	return stu[m];
}

void print(struct Student stud)
{
	printf("\n�ɼ���ߵ�ѧ���ǣ�\n");
	printf("ѧ�ţ�%d\n������%s\n���ſγɼ���%d,%d,%d\nƽ���ɼ���%6.2f\n",
	       stud.num,stud.name,stud.score[0],stud.score[1],stud.score[2],stud.aver);
}

int main()
{
	struct Student stu[N],*p=stu;
	input(p);
	print(max(p));
	return 0;
}
