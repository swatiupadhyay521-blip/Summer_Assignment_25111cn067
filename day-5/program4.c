#include<stdio.h>
int main(){
    int num,i,largest=0;
    printf("enter the value of number = ");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        while(num%i==0)
        {
            largest=i;
            num=num/i;
        }


    }
    printf("the largest prime factor of number is %d",largest);
    return 0;
}
