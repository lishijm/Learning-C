//two_func.c -- һ���ļ��а�����������ʵ�� 
#include <stdio.h>
void butler (void); //ANSI/ISO C����ԭ��  "butler " �����ⶨ�� 
int main (void)
{
	printf("I will summon the butler function\n");
    butler();
	printf("Yes,bring me some tea and writeable DVDs.\n");
	
	getchar();
	
	return 0;
}
void butler (void) //��������Ŀ�ʼ 
{
	printf("You rang,sir?\n");
}

