#include<stdio.h>
int main(){
    int n,t,r,sum=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;

    }
    if(sum==t)
    {
        printf("the number is palindrome %d",t);

    }
    else{
        printf("the number is not palindrome %d",t);
    }
    return 0;
    
}