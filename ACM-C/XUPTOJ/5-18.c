#include<stdio.h>
int main(){
	int date,year,month,day,n,i,m,d,y,t;//tΪ������ 
	int dpm[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&n);
	for(t=1;t<=n;t++){
		scanf("%d",&date);
		year=date/10000;
		month=(date/100)%100;
		day=date%100;
		//�Ϸ��Ƿ��ж� 
		if(month>12){
			i=0;
		}
		else if(month<=12){
			if(year%4==0&&year%100!=0||year%400==0){
				dpm[1]=29;
				if(day>dpm[month-1]){
					
					i=0;
				}
				else{
					i=1;
				}
			}
			else{
				dpm[1]=28;
				if(day>dpm[month-1]){
					i=0;
				}
				else{
					i=1;
				}
			}
		}
		//�����жϼ������� 
		if(i==1){
			m=month;d=day;y=year;
			if(m==1||m==2){
        		m+=12;
        		y--;
			}
    		int Week=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;//ʹ�û�ķ����ɭ���㹫ʽ
			
			switch(Week){
    			case 0: printf("%d��%d��%d��������һ\n",year,month,day); break;
    			case 1: printf("%d��%d��%d�������ڶ�\n",year,month,day); break;
    			case 2: printf("%d��%d��%d����������\n",year,month,day); break;
    			case 3: printf("%d��%d��%d����������\n",year,month,day); break;
    			case 4: printf("%d��%d��%d����������\n",year,month,day); break;
    			case 5: printf("%d��%d��%d����������\n",year,month,day); break;
    			case 6: printf("%d��%d��%d����������\n",year,month,day); break;
    		}
		}
		else if(i==0){
			printf("%d��%d��%d���ǷǷ�����\n",year,month,day);
		}
	}
	return 0;
}
