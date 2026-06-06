#include<stdio.h>
int main(){
    int n;
    int a[10];
    int rem,i=0,j;
    printf("enter the value of number =  ");
    scanf("%d",&n);
    while(n){
        rem=n%2;
        n=n/2;
        a[i]=rem;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    return 0; 
}