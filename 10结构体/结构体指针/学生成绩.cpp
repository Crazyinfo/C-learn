#include<stdio.h>
struct date
{
	int year;
	int month;
	int day;
};

struct STUDENT
{
	int studentID;
	char studentName[10];
	char studentSex[4];
	struct date timeOfEnter;
	int scoreComputer;
	int scoreEnglish;
	int scoreMath;
	int scoreMusic;
};

struct STUDENT stu[30]=
{{1,"张明","男",{2017,12,20},90,83,72,82},
{2,"李雷","男",{2017,07,06},78,92,88,78},
{3,"韩梅梅","女",{2017,07,06},89,72,98,66},
{4,"Lucy","女",{2017,07,06},78,95,87,90}
};

int main()
{
	struct STUDENT *pt;
	pt=stu;
	int i;
	for(i=0;pt<stu+30;pt++)
	{
		sum[0]=sum[0]+pt->scoreComputer;
		sum[1]=sum[1]+pt->scoreEnglish;
		sum[2]=sum[2]+pt->scoreMath;
		sum[3]=sum[3]+pt->scoreMusic;
	}
	pt=stu;
	for(i=0;i<4;i++,pt++)
	{
		int a;
		a=(pt.scoreComputer+pt.scoreMath+pt.scoreEnglish+pt.scoreMusic)/4
		printf("%d",a);
	}
	return 0;
}
