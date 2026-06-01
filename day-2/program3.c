#include<stdio.h>
int main(){
    int n,r,product=1;
printf("enter the value of n:");
scanf("%d",&n);
while(n!=0)
{
    r=n%10;
    product=product*r;
    n=n/10;
}
printf("the product of a number is %d",product);
return 0;
}