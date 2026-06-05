#include<stdio.h>
int main(){
    int num,temp,sum=0,f=1,digit,i;
    printf("enter the value of number ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    { f=1;
    digit=temp%10;
    for(i=1;i<=digit;i++)
    {
        f=f*i;
    }
    sum=sum+f;
    temp=temp/10;
}
if(sum==num)
{
    printf("the number is strong number %d ",num);
}
else
{
    printf("the number is not strong number %d",num);
}
return 0;
}