#include<stdio.h>
int main(){
    int num,result=0,remainder,originalnum;
    printf("enter the value of integer ");
    scanf("%d",&num);
    originalnum=num;
    while(num!=0)
    {
        remainder=num%10;
        result+=remainder*remainder*remainder;
        num=num/10;
    }
    if(result==originalnum)
    {
        printf("the number is armstrong %d",originalnum);

    }
    else{
        printf("the number is not armstrong ",originalnum);
    }
    return 0;
}