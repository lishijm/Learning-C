#include<stdio.h>
//�ӷ����� 
void sum(int a,int b){
	return a+b;
}
int main(){
	int a,b,sum;
	scanf("%d %d",&a,&b);
	sum=sum(a,b);
	printf("%d",sum);
	return 0;
} 
