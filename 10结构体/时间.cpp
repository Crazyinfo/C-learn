#include<stdio.h>
#include<windows.h>
#include<stdlib.h> 

struct Time
{
	int hour;
	int minute;
	int second;
}a;

int main()
{
    void run();
    void display();
	scanf("%d %d %d",&a.hour,&a.minute,&a.second); 
    while(a.hour>=0)
	{
		run();
		display();
	 } 
    return 0;
}

void run()
{
	a.second++;Sleep(1000);
	if(a.second==60)
      {a.second=0;a.minute++;}
	if(a.minute==60)
	  {a.hour++;a.minute=0;}
	if(a.hour==24)
	  a.hour=0;
}

void display()
{
    printf("%02d:%02d:%02d\r",a.hour,a.minute,a.second);
}
