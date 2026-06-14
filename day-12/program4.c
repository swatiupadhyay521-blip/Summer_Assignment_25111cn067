#include<stdio.h>
int perfectnumb(int n);
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    if(perfectnumb(n))
    printf("the number is perfect ",n);
    else
    printf("the number is not perfect ",n);
    return 0;
}
int perfectnumb(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        
    }
    if(sum==n)
    return 1;
    else
    return 0;
}