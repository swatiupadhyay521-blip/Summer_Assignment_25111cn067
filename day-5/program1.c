#include<stdio.h>
int main(){
    int num,i,sum=0;
    printf("enter the value of number ");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        sum=sum+i;
    }
    if(sum==num)
     printf("the number is a perfect number ",num);

    else
        printf("the number is not perfect",num);
    
    return 0;
}









