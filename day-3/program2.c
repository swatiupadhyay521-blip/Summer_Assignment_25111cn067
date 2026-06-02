#include<stdio.h>
int isprime(int n){
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
}


int main(){
    int n1,n2,i;
    printf("enter the first number\n ");
    scanf("%d",&n1);
    printf("enter the second number\n ");
    scanf("%d",&n2);
    printf("the prime numbers between %d and %d are: ",n1,n2);
    for(i=n1;i<=n2;i++)
    {
        if(isprime(i))
        {
            printf("%d\n",i);
        }
    }
    return 0;
}