#include<stdio.h>
int main(){
    int n,sum=0,r;
    printf("enter the value of n: ");
    scanf("%d",&n);
    while (n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;

    }
    printf("the sum of digits of a number %d",sum);
    return 0;
}