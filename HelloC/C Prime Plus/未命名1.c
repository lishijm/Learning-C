#include<stdio.h>
int main(){
	float a,b,jieguo;
	char fuhao;
	scanf("%f%c%f",&a,&fuhao,&b);
	//��֧�ж� 
	switch(fuhao){
		case'+':jieguo=a+b;
		break;
		case'-':jieguo=a-b;
		break;
		case'*':jieguo=a*b;
		break;
		case'/':jieguo=a/b;
		break;
	}
	printf("%.2f%c%.2f=%.2f",a,fuhao,b,jieguo);
	
	return 0;
} 
