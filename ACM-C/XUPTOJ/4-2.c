#include<stdio.h>
int main ()
{
	int day,week;
	scanf("%d",&day);
	
	week=day%7;
	
	if(week==1)
	printf("����һ"); 
	
	if(week==2)
	printf("���ڶ�"); 
	
	if(week==3)
	printf("������"); 
	
	if(week==4)
	printf("������"); 
	
	if(week==5)
	printf("������"); 
	
	if(week==6)
	printf("������"); 
	
	if(week==0)
	printf("������"); 
	
	return 0; 
}
