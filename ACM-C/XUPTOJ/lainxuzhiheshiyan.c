#include <stdio.h>
int main()
{
    int row,i,j,N ;
    scanf("%d", &N ); //�����С
    row=1;
    while(row<=N)   /*ǰN���Ǻ�*/
    {
        for(i=1;i<=N-row;i++)
            printf(" ");
        for(j=1;j<=2*row-1;j++)
            printf("*");
        printf("\n");
        row++;
    }
    row=1;
     
    while(row<=N-1)   /*��N-1���Ǻ�*/
    {
        for(i=1;i<=row;i++)
            printf(" ");
        for(j=1;j<=2*(N-row)-1;j++)
            printf("*");
        printf("\n");
        row++;
    }
     
    return 0;
}
