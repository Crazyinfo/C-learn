/************************** 
date:       2017��12��23�� 
function:   ��������ʵ��
author:
************************* */
# include <stdio.h>

# include <math.h>
char get_choice(char *c)         //��ȡ�û������ѡ���������ʼ���� 
{
  printf("---------------------------------\n");
  printf("a.�ӷ�                     b.����\n");
  printf("c.�˷�                     d.����\n");
  printf("e.����                     f.ƽ��\n");
  printf("g.����                     q.�˳�\n");
  printf("---------------------------------\n");
  printf("���������ѡ�\n");
  scanf("%c",c);
  while((*c<97||*c>104)&&*c!=113){ 
    printf("������a~g��q��\n");
    scanf("%c",c);}
 }

float get_1(float *p1,float *p2)            //��ȡ�û�����ļ���ֵ
{
    printf("�������һ��ֵ��\n");
    scanf("%f",p1);
    printf("������ڶ���ֵ��\n");
    scanf("%f",p2);
}

float get_2(float *p1,float *p2) 
{
  	printf("������һ����ֵ��\n");
    scanf("%f",p1);
    *p2=0;
}


float add(float a,float b)                //����ӷ�����
{ 
  get_1(&a,&b);
  float k;
  k=a+b;
  printf("%f + %f = %f\n\n",a,b,k);
 } 

float subtraction(float a,float b)        //�����������
{
  get_1(&a,&b);
  float k;
  k=a-b;
  printf("%f - %f = %f\n\n",a,b,k); 
 } 

float multiplication(float a,float b)     //����˷�����
{
  get_1(&a,&b);
  float k;
  k=a*b;
  printf("%f * %f = %f\n\n",a,b,k); 
}

float division(float a,float b)           //�����������
{  
  get_1(&a,&b);
  float k;
  k=a/b;
  printf("%f / %f = %f\n\n",a,b,k); 
}

float extract(float a,float b)            //���忪������
{
  get_2(&a,&b);
  float k;
  k=sqrt(a);
  printf("%f������ֵΪ��%f\n\n",a,k); 
}

float square(float a,float b)             //����ƽ������
{
  get_2(&a,&b);
  float k;
  k=pow(a,2);
  printf("%fƽ����ֵΪ��%f\n\n",a,k); 
}

float cube(float a,float b)               //������������
{
  get_2(&a,&b);
  float k;
  k=pow(a,3);
  printf("%f������ֵΪ��%f\n\n",a,k); 
}
//�������ܿ������в��䣬������������Ǻ����ȡ���������math.h�ṩ�ĺ���ʵ�֡� 


int main()
{
    char choice;
    printf("***��ӭʹ��c���Լ�����***\n");
    get_choice(&choice);
    while(choice != 'q')
    {    
	  if(choice=='a')
        {
		float a,b;
        add(a,b);}
      if(choice=='b')
        {
		float a,b;
		subtraction(a,b);}
      if(choice=='c')
        {
		float a,b;
		multiplication(a,b);}
      if(choice=='d')
        {
		float a,b;
		division(a,b);}
      if(choice=='e')
        {
		float a,b;
		extract(a,b);}
      if(choice=='f')
        {
		float a,b;
		square(a,b);}
      if(choice=='g')
        {
		float a,b;
		cube(a,b);}
	  get_choice(&choice);
    }        
    return 0;
}

//�벹����������Ĵ��� 

