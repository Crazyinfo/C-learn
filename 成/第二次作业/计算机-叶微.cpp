/************************** 
date:       2017年12月23日 
function:   计算器的实现
author:
************************* */
# include <stdio.h>

# include <math.h>
char get_choice(char *c)         //获取用户输入的选项，并建立开始界面 
{
  printf("---------------------------------\n");
  printf("a.加法                     b.减法\n");
  printf("c.乘法                     d.除法\n");
  printf("e.开方                     f.平方\n");
  printf("g.立方                     q.退出\n");
  printf("---------------------------------\n");
  printf("请输入你的选项：\n");
  scanf("%c",c);
  while((*c<97||*c>104)&&*c!=113){ 
    printf("请输入a~g或q：\n");
    scanf("%c",c);}
 }

float get_1(float *p1,float *p2)            //获取用户输入的计算值
{
    printf("请输入第一个值：\n");
    scanf("%f",p1);
    printf("请输入第二个值：\n");
    scanf("%f",p2);
}

float get_2(float *p1,float *p2) 
{
  	printf("请输入一个数值：\n");
    scanf("%f",p1);
    *p2=0;
}


float add(float a,float b)                //定义加法函数
{ 
  get_1(&a,&b);
  float k;
  k=a+b;
  printf("%f + %f = %f\n\n",a,b,k);
 } 

float subtraction(float a,float b)        //定义减法函数
{
  get_1(&a,&b);
  float k;
  k=a-b;
  printf("%f - %f = %f\n\n",a,b,k); 
 } 

float multiplication(float a,float b)     //定义乘法函数
{
  get_1(&a,&b);
  float k;
  k=a*b;
  printf("%f * %f = %f\n\n",a,b,k); 
}

float division(float a,float b)           //定义除法函数
{  
  get_1(&a,&b);
  float k;
  k=a/b;
  printf("%f / %f = %f\n\n",a,b,k); 
}

float extract(float a,float b)            //定义开方函数
{
  get_2(&a,&b);
  float k;
  k=sqrt(a);
  printf("%f开方的值为：%f\n\n",a,k); 
}

float square(float a,float b)             //定义平方函数
{
  get_2(&a,&b);
  float k;
  k=pow(a,2);
  printf("%f平方的值为：%f\n\n",a,k); 
}

float cube(float a,float b)               //定义立方函数
{
  get_2(&a,&b);
  float k;
  k=pow(a,3);
  printf("%f立方的值为：%f\n\n",a,k); 
}
//其他功能可以自行补充，如求对数，三角函数等。可以利用math.h提供的函数实现。 


int main()
{
    char choice;
    printf("***欢迎使用c语言计算器***\n");
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

//请补充各个函数的代码 

