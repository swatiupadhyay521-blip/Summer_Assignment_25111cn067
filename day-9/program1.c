#include<stdio.h>
void main(){
    int i,j,n;
    printf("enter the number of rows you want to enter : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}