#include<stdio.h>
int main(){
    int n,i,key,count=0,a[100];
    printf("enter the number of elements of array: ");
    scanf("%d",&n);

    printf("enter the array elements:\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number whose frequency to find:\n  ");
    scanf("%d",&key);
    for(i=0;i<n-1;i++)
    {
        if(a[i]==key){
            count++;
        }
    }
    printf("the frequency of %d = %d",key,count);
    return 0;
}