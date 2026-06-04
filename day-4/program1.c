#include<stdio.h>
int main(){
    int n;
    int a=0,b=1;
    int nextterm=a+b;
    printf("enter the number of terms  ");
    scanf("%d",&n);
    printf("the fibonacci series %d%d",a,b);
    for(int i=3;i<=n;i++)
    {printf("%d",nextterm);
    
        a=b;
        b=nextterm;
        nextterm=a+b;
    }
    
    return 0;
}