#include<stdio.h>
#include<stdlib.h>
int week(int month,int day,int year);

int week(int month,int day,int year){
	int m=month;int d=day;int y=year;
	int x; 
	if(m==1||m==2){
    	m+=12;
    	y--;
	}
	int Week=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;//ʹ�û�ķ����ɭ���㹫ʽ

	switch(Week){
    	case 0: x=0; break;
    	case 1: x=1; break;
    	case 2: x=2; break;
    	case 3: x=3; break;
		case 4: x=4; break;
    	case 5: x=5; break;
    	case 6: x=6; break;
	}
	return x; 
}
int main(){
	int year,month,day,space,flag=0,returnv,returnv_4;//spaceΪ�ո���� 
	int dpm[12]={31,28,31,30,31,30,31,31,30,31,30,31};//ÿ������ 
	scanf("%d",&year);
	if(year%4==0&&year%100!=0||year%400==0){
		dpm[1]=29;
	}
	else{
		dpm[1]=28;
	}
	for(month=1;month<=12;month++){
		switch(month){
			case  1:printf("һ��\n");break;
			case  2:printf("����\n");break;
			case  3:printf("����\n");break;
			case  4:printf("����\n");break;
			case  5:printf("����\n");break;
			case  6:printf("����\n");break;
			case  7:printf("����\n");break;
			case  8:printf("����\n");break;
			case  9:printf("����\n");break;
			case 10:printf("ʮ��\n");break;
			case 11:printf("ʮһ��\n");break;
			case 12:printf("ʮ����\n");break;
		}
		printf("Mon\tTue\tWed\tThu\tFri\tSat\tSun\t\n");
		//ÿ��1����Ҫ�ж������ڼ�Ȼ��ͨ��ռλʵ�ֿո�
		//�ո�Ϊ�ı��ķ���ֵ 
		//ֻ���ж�ÿ��һ�յ����� 
		for(day=1;day<=dpm[month-1];day++){
			returnv=week(month,day,year);
			if(day==1){
				returnv_4=4*returnv;
				for(space=0;space<=returnv_4;space++){
					printf("\t");
				}
			}
			printf("%d\t",day);
			if(returnv==6){
				printf("\n");
			}
			if(day==dpm[month-1]){
				printf("\n");
			}
		}
	}
	return 0;
}
