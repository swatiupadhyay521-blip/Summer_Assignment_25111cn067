#include<stdio.h>
int armstrong(int n);

    int main(){
        int n;
        printf("enter the number: ");
        scanf("%d",&n);
        if (armstrong(n))
        printf("the number is armstrong",n);
        else
        printf("the number is not armstrong ",n);
    }

int armstrong(int n)
{
    int result=0,originalnum,rem;
    originalnum=n;
    while(n>0)
    {
         rem=n%10;
         result=result+rem*rem*rem;
         n=n/10;

    }
    if(result==originalnum)
    return 1;
    else 
    return 0;

}