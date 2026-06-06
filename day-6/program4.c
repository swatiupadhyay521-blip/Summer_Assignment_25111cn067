#include<stdio.h>
int main(){
    int n,result=1,i,X;
    printf("enter the value of base : ");
    scanf("%d",&X);
    printf("enter the value of power : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        result=result*X;

    }
    printf("%d^%d = %d",X,n,result);
    return 0;
}