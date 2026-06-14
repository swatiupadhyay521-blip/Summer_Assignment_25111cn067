#include<stdio.h>
int fibonaci(int n);
int main(){
    int n;
    printf("enter the position: ");
    scanf("%d",&n);
    printf("the fibonaci term is %d ",fibonaci(n));
    return 0; 


}
int fibonaci(int n)
{
    int a=0,b=1,temp,i;
    if(n==1)
    return a;
    if(n==2)
    return b;
    for(i=3;i<=n;i++)
    {
        temp=a+b;
        a=b;
        b=temp;
    }
    return temp; 


}