#include<stdio.h>
int main(){
    int f=1,n,i;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
printf("the factorial of number is %d",f);
return 0;
}