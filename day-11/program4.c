#include<stdio.h>
int factorial(int);
int main(){
    int n,f=1;
    printf("enter the value of n: ");
    scanf("%d",&n);
    f= factorial(n);
    printf("the factorial of number is %d: ",f);
    return 0;


}
int factorial(int n){
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;

}

