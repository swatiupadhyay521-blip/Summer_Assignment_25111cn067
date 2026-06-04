#include<stdio.h>
int main(){
    int n,i;
    int a=0,b=1;
    int nextterm=a+b;
    printf("enter the value of n ");
    scanf("%d",&n);
    for(i=3;i<=n;i++)
    {
        a=b;
        b=nextterm;
        nextterm=a+b;
    }
    printf(" the nth term of fibonaci series %d",n);
    return 0;
}