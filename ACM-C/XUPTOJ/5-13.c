#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int i,n,ddsx,bai,shi,ge,t;//ddsx��Ϊ����ˮ�ɻ��� 
	scanf("%d\n",&n);
	scanf("%d",&ddsx);
	for(i=1;i<=n;i++)
	{
		bai=ddsx/100;
		shi=(ddsx%100)/10;
		ge=ddsx%10;
	    t=ge*ge*ge+shi*shi*shi+bai*bai*bai;//tΪˮ�ɻ����㷨
		//��Ϊ�жϲ��� 
	    if(t==ddsx)
	    {
	    	printf("%d��ˮ�ɻ���\n",ddsx);
		}
		else
		{
			printf("%d����ˮ�ɻ���\n",ddsx);
		}
		scanf("%d",&ddsx);
	} 
	return 0;
}
