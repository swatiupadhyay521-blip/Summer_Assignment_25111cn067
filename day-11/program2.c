#include<stdio.h>
int max(int a,int b);
int main(){
    int a,b,maximum;
    printf("enter the value of a and b ");
    scanf("%d%d",&a,&b);
    maximum=max(a,b);
    printf("the maximum of two numbers is %d",maximum);
    return 0; 

    
}
int max(int a , int b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}