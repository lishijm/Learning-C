#include<stdio.h>
struct date{
    int year,month,day;
};
struct book{
    int num;
    float pri;
    char name[30],wter[30],pub[30];
    struct date dates;
};
int main(){
    int n,i;
    struct book books[20];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %s %s %s %4d-%2d-%2d %f",&books[i].num,&books[i].name,&books[i].wter,&books[i].pub,&books[i].dates.year,&books[i].dates.month,&books[i].dates.day,&books[i].pri);
    }
    printf("��� ���� ���� ������ �������� �۸�\n");
    for(i=n-1;i>=0;i--){
        printf("%d %s %s %s %d��%d��%d�� %.2f\n",books[i].num,books[i].name,books[i].wter,&books[i].pub,books[i].dates.year,books[i].dates.month,books[i].dates.day,books[i].pri);
    }
    return 0;
}
