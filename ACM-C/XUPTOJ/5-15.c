#include<stdio.h>
int main()
{
	int x,n,s=0,i;//iΪ������ 
	scanf("%d %d",&x,&n);
	for(i=0;i<n;i++)
	{
		s=s+x;
		x++;
	}
	printf("%d",s);
	
	return 0;
}
