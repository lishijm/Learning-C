#include<stdio.h>
#include<string.h>
#define maxn 1010
int a[maxn];
int main(int argc, char const *argv[])
{
    int n,k,first=1;
    memset(a,0,sizeof(a));
    scanf("%d %d",a,&k);
    for(int i=1;i<=k;i++){
        if(j%i==0){
            a[j]=a[i];
        }
        for(int j=1;j<=n;j++){
            if(a[i]){
                if(first){
                    first=0;
                }
                else{
                    printf(" ");
                    printf("%d",i);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
