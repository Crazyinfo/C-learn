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
struct student stu[N] = { { "1","����",90 },{ "2","����",87 },{ "3","����",76 },{ "4","����",67 },{ "5","����",56 } };

int count = 5;

void insert(int i)   //����ѧ��������Ϣ�ĺ���
{
    printf("��%d��ѧ����������", i + 1);

    scanf("%s", stu[i].name);

    printf("\n");

    printf("��%d��ѧ���ķ�����", i + 1);

    scanf("%d", &stu[i].score);

    printf("\n");

    count++;
    sprintf(stu[i].num,"%d",count);
}

void input()     //�������ݵĺ���
{
    system("color 3e");
    void menu();
    void insert(int i);
    int i, j, k, l, r;
    printf("�������뼸��ѧ������Ϣ? (1-%d) [ ]\b\b", N - 5);
    scanf("%d", &j);
    r = 5 + j;
    for (i = 5; i<r; i++)
    {
        printf("\n�����%d��ѧ������Ϣ��\n", i + 1);
        insert(i);
    }
    do
    {
        printf("���ز˵��밴1! [ ]\b\b");
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





void search()        //��ѯ�ɼ��ĺ���
{
    void menu();
    void printf_one(int k);
    struct student s;
    int i, k, w0, w1, w2;
    do
    {
        printf("��ѡ����ҵ����:  1.����   2.ѧ��   [ ]\b\b");
        scanf("%d", &w1);
        if (w1<1 || w1>2)
        {
            printf("�������!����������!\n");
            w2 = 1;
        }
        else
            w2 = 0;
    } while (w2 == 1);
    if (w1 == 1)  //����������
    {
        do
        {
            k = -1;
            do
            {
                printf("\n������������ҵ�ѧ��������!\nName:");
                scanf("%s", s.name);
                for (i = 0; i<5; i++)
                    if (strcmp(s.name, stu[i].name) == 0)
                    {
                        k = i;
                        s = stu[i];
                    }
                if (k == -1)  //û���ҵ�
                {
                    int o;
                    printf("\n\nû�����ѧ������Ϣ!\n");
                    printf("What do you want to do?\n\t1.����   2.���ز˵�  [ ]\b\b");
                    scanf("%d", &o);
                    if (o == 1)
                    {
                        system("cls");
                        search();   //��������
                    }
                    else
                    {
                        system("cls");
                        menu();   //���ز˵�
                    }
                }
            } while (k == -1);
            system("cls");
            printf_one(k);     //���ҵ��Ժ�������ѧ������Ϣ
            printf("\nWhat do you want to do?\n\t1.����   2.���ز˵�   [ ]\b\b");
            scanf("%d", &w0);
        } while (w0 == 1);
        system("cls");
        menu();   //���ڲ���ʱ���ز˵�
    }
    else    //��ѧ�Ų���
    {
        do
        {
            k = -1;
            do
            {
                printf("\n������������ҵ�ѧ����ѧ��!\nNum:");
                scanf("%s", s.num);
                for (i = 0; i<5; i++)
                    if (strcmp(s.num, stu[i].num) == 0)  //�ҵ���
                    {
                        k = i;
                        s = stu[i];
                    }
                if (k == -1)    //û���ҵ�
                {
                    int o;
                    printf("\n\nû�����ѧ������Ϣ!\n");
                    printf("What do you want to do?\n\t1.����   2.���ز˵�  [ ]\b\b");
                    scanf("%d", &o);
                    if (o == 1)
                    {
                        system("cls");
                        search();  // ��������
                    }
                    else
                    {
                        system("cls");
                        menu();    //���ز˵�
                    }
                }
            } while (k == -1);
            system("cls");
            printf_one(k);   //�ҵ���������ѧ������Ϣ
            printf("\nWhat do you want to do?\n\t1.����  2.���ز˵�   [ ]\b\b");
            scanf("%d", &w0);
        } while (w0 == 1);
        system("cls");
        menu();     //���ڲ���ʱ���ز˵�
    }

}



void xiugai()     //�޸�ѧ����Ϣ�ĺ���
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
            printf("\n����������Ҫ�޸ĵ�ѧ��������!Name:");
            scanf("%s",s.name);
            for(i=0;i<5;i++)
            if(strcmp(s.name,stu[i].name) == 0)  //������һ��ѧ��ƥ��
            {
                k = i;
                s = stu[i];
            }
            if(k == -1)   // û���ҵ������ѧ��
            {                
                printf("\n\nû�����ѧ������Ϣ!\n");
                printf("What do you want to do?\n\t1.����  2.���ز˵�  [ ]\b\b");
                scanf("%d",&o);
                if(o == 1)
                {
                    system("cls");
                    //xiugai();    //�����޸�
                }
                else
                {
                    system("cls");
                    menu();    //���ز˵�
                }
            }

        }while(k == -1);
        system("cls");
        printf("�޸����ѧ���ķ�����");

        scanf("%d", &stu[k].score);
        printf("\n");
        printf_one(k);   //������ѧ������Ϣ
        printf("\nWhat do you want to do?\n\t1.����  2.���ز˵�  [ ]\b\b");
        scanf("%d", &o);
        if (o != 1)
        {
            system("cls");
            menu();    //���ز˵�
        }
    }while(1);
}



void printf_all()       //�������ѧ���ɼ��ĺ���
{
    void menu();
    system("color 4e");
    int i, j, k;
    for (i = 0; i<N; i++)
    {
        printf("ѧ�ţ�%s    ������%s    ������%d\n", stu[i].num, stu[i].name, stu[i].score);
    }
    do
    {
        printf("���ز˵��밴1  [ ]\b\b");
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



void printf_one(int k)  //���ĳһ��ѧ������Ϣ�ĺ���
{
    printf("ѧ��: %s    ����: %s   ����: %d", stu[k].num, stu[k].name, stu[k].score);
}


void Exit()   //�˳�ϵͳ�ĺ���
{
    exit(0);
}

void menu()       //�˵�����
{
    system("color 2e");
    printf("\n\t\t\t��ӭʹ��ѧ��ѧ������ϵͳ!\n");
    printf("\n");
    int n, m;
    do
    {
        puts("\t\t********************�˵�*********************");
        puts("\t\t*********************************************");
        puts("\t\t**************ѧ��ѧ������ϵͳ***************");
        puts("\t\t*********************************************");
        puts("\t\t*********************************************");
        puts("\t\t*******        1--��������               ****");
        puts("\t\t*******        2--��ѯ�ɼ�               ****");
        puts("\t\t*******        3--�޸ĳɼ�               ****");
        puts("\t\t*******        4--�������ѧ���ɼ�       ****");
        puts("\t\t*******        5--ͳ�Ƽ�������������   ****");
        puts("\t\t*******        6--������в�����ѧ���ĳɼ� **");
        puts("\t\t*******        7--�����������ѧ�������ͳɼ�*");
        puts("\t\t*******        8--�˳�ϵͳ               ****");
        puts("\t\t*********************************************");
        printf("��ѡ���������(1~8): [ ]\b\b");
        scanf("%d", &n);
        if (n<1 || n>8)
        {
            system("cls");
            printf("ѡ�����! ������ѡ��!\n");
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
