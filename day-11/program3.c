#include<stdio.h>
int prime(int );
int main(){
    int n ;
    printf("enter the value of n: ");
    scanf("%d",&n);
    if(prime(n))
    printf("%d is prime ",n);
    else
        printf("%d is not prime ",n);
        return 0; 
}
int prime(int n){
int i;
if(n<=1)
return 0;
for(i=2;i*i<=n;i++)
{
    if(n%i==0)
    return 0;
}
return 1;



    

    
}