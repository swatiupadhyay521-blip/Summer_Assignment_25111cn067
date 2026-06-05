#include<stdio.h>
int main(){
    int num,i;
    printf("enter the value of number = ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i == 0){
            printf("%d is factor of number \n", i);
        }
    }
    return 0;
}