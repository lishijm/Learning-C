#include<stdio.h>
int main(){
	int n,sum=0,i,j,s=0;//nΪ�����������,sumΪú��������sΪ���ں�
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			s=s+j;
		}
		sum=s+sum;
		s=0;
	}
	printf("%d",sum); 
	
	return 0;
}
