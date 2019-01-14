#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 10
struct student
{
    char  num[5];
    char name[20];
    int  score;
};
struct student stu[N] = { { "1","张三",90 },{ "2","李四",87 },{ "3","王五",76 },{ "4","赵六",67 },{ "5","刘七",56 } };

int count = 5;

void insert(int i)   //输入学生具体信息的函数
{
    printf("第%d个学生的姓名：", i + 1);

    scanf("%s", stu[i].name);

    printf("\n");

    printf("第%d个学生的分数：", i + 1);

    scanf("%d", &stu[i].score);

    printf("\n");

    count++;
    sprintf(stu[i].num,"%d",count);
}

void input()     //输入数据的函数
{
    system("color 3e");
    void menu();
    void insert(int i);
    int i, j, k, l, r;
    printf("您想输入几个学生的信息? (1-%d) [ ]\b\b", N - 5);
    scanf("%d", &j);
    r = 5 + j;
    for (i = 5; i<r; i++)
    {
        printf("\n输入第%d个学生的信息。\n", i + 1);
        insert(i);
    }
    do
    {
        printf("返回菜单请按1! [ ]\b\b");
        scanf("%d", &k);
        if (k == 1)
        {
            system("cls");
            menu();
        }
        else
            l = 0;
    } while (l == 0);
}





void search()        //查询成绩的函数
{
    void menu();
    void printf_one(int k);
    struct student s;
    int i, k, w0, w1, w2;
    do
    {
        printf("请选择查找的类别:  1.姓名   2.学号   [ ]\b\b");
        scanf("%d", &w1);
        if (w1<1 || w1>2)
        {
            printf("输入错误!请重新输入!\n");
            w2 = 1;
        }
        else
            w2 = 0;
    } while (w2 == 1);
    if (w1 == 1)  //按姓名查找
    {
        do
        {
            k = -1;
            do
            {
                printf("\n请输入您想查找的学生的姓名!\nName:");
                scanf("%s", s.name);
                for (i = 0; i<5; i++)
                    if (strcmp(s.name, stu[i].name) == 0)
                    {
                        k = i;
                        s = stu[i];
                    }
                if (k == -1)  //没有找到
                {
                    int o;
                    printf("\n\n没有这个学生的信息!\n");
                    printf("What do you want to do?\n\t1.继续   2.返回菜单  [ ]\b\b");
                    scanf("%d", &o);
                    if (o == 1)
                    {
                        system("cls");
                        search();   //继续查找
                    }
                    else
                    {
                        system("cls");
                        menu();   //返回菜单
                    }
                }
            } while (k == -1);
            system("cls");
            printf_one(k);     //查找到以后输出这个学生的信息
            printf("\nWhat do you want to do?\n\t1.继续   2.返回菜单   [ ]\b\b");
            scanf("%d", &w0);
        } while (w0 == 1);
        system("cls");
        menu();   //不在查找时返回菜单
    }
    else    //按学号查找
    {
        do
        {
            k = -1;
            do
            {
                printf("\n请输入您想查找的学生的学号!\nNum:");
                scanf("%s", s.num);
                for (i = 0; i<5; i++)
                    if (strcmp(s.num, stu[i].num) == 0)  //找到了
                    {
                        k = i;
                        s = stu[i];
                    }
                if (k == -1)    //没有找到
                {
                    int o;
                    printf("\n\n没有这个学生的信息!\n");
                    printf("What do you want to do?\n\t1.继续   2.返回菜单  [ ]\b\b");
                    scanf("%d", &o);
                    if (o == 1)
                    {
                        system("cls");
                        search();  // 继续查找
                    }
                    else
                    {
                        system("cls");
                        menu();    //返回菜单
                    }
                }
            } while (k == -1);
            system("cls");
            printf_one(k);   //找到后输出这个学生的信息
            printf("\nWhat do you want to do?\n\t1.继续  2.返回菜单   [ ]\b\b");
            scanf("%d", &w0);
        } while (w0 == 1);
        system("cls");
        menu();     //不在查找时返回菜单
    }

}



void xiugai()     //修改学生信息的函数
{
    void menu();
    void printf_one(int k);
    void xiugai_2();
    struct student s;
    int i,n,k,w0=1,w1,w2=0,o;
    do
    {
        k=-1;
        do
        {
            printf("\n请输入您想要修改的学生的姓名!Name:");
            scanf("%s",s.name);
            for(i=0;i<5;i++)
            if(strcmp(s.name,stu[i].name) == 0)  //与其中一个学生匹配
            {
                k = i;
                s = stu[i];
            }
            if(k == -1)   // 没有找到输入的学生
            {                
                printf("\n\n没有这个学生的信息!\n");
                printf("What do you want to do?\n\t1.继续  2.返回菜单  [ ]\b\b");
                scanf("%d",&o);
                if(o == 1)
                {
                    system("cls");
                    //xiugai();    //继续修改
                }
                else
                {
                    system("cls");
                    menu();    //返回菜单
                }
            }

        }while(k == -1);
        system("cls");
        printf("修改这个学生的分数：");

        scanf("%d", &stu[k].score);
        printf("\n");
        printf_one(k);   //输出这个学生的信息
        printf("\nWhat do you want to do?\n\t1.继续  2.返回菜单  [ ]\b\b");
        scanf("%d", &o);
        if (o != 1)
        {
            system("cls");
            menu();    //返回菜单
        }
    }while(1);
}



void printf_all()       //输出所有学生成绩的函数
{
    void menu();
    system("color 4e");
    int i, j, k;
    for (i = 0; i<N; i++)
    {
        printf("学号：%s    姓名：%s    分数：%d\n", stu[i].num, stu[i].name, stu[i].score);
    }
    do
    {
        printf("返回菜单请按1  [ ]\b\b");
        scanf("%d", &j);
        if (j == 1)
        {
            system("cls");
            menu();
        }
        else
        {
            k = 0;
        }
    } while (k == 0);
}



void printf_one(int k)  //输出某一个学生的信息的函数
{
    printf("学号: %s    姓名: %s   分数: %d", stu[k].num, stu[k].name, stu[k].score);
}


void Exit()   //退出系统的函数
{
    exit(0);
}

void menu()       //菜单函数
{
    system("color 2e");
    printf("\n\t\t\t欢迎使用学生学籍管理系统!\n");
    printf("\n");
    int n, m;
    do
    {
        puts("\t\t********************菜单*********************");
        puts("\t\t*********************************************");
        puts("\t\t**************学生学籍管理系统***************");
        puts("\t\t*********************************************");
        puts("\t\t*********************************************");
        puts("\t\t*******        1--输入数据               ****");
        puts("\t\t*******        2--查询成绩               ****");
        puts("\t\t*******        3--修改成绩               ****");
        puts("\t\t*******        4--输出所有学生成绩       ****");
        puts("\t\t*******        5--统计及格和优秀的人数   ****");
        puts("\t\t*******        6--输出所有不及格学生的成绩 **");
        puts("\t\t*******        7--输出所有优秀学生姓名和成绩*");
        puts("\t\t*******        8--退出系统               ****");
        puts("\t\t*********************************************");
        printf("请选择服务种类(1~8): [ ]\b\b");
        scanf("%d", &n);
        if (n<1 || n>8)
        {
            system("cls");
            printf("选择错误! 请重新选择!\n");
            m = 1;
        }
        else
        {
            m = 0;
        }
    } while (m == 1);
    switch (n)
    {
    case 1: system("cls"); input(); break;
    case 2: system("cls"); search(); break;
    case 3: system("cls"); xiugai(); break;
    case 4: system("cls"); printf_all(); break;
        //    case 5: system("cls"); tongji(); break;
        //    case 6: system("cls"); printf_all_bujige() break;
        //    case 7: system("cls"); printf_all_youxiu() break;
    case 8: Exit(); break;
    }
}

int main()
{
    menu();
    return 0;
}
