#include<stdio.h>
int main(){
    int a[100],n,i,key,found=0;
    printf("enter the number of elements in array: ");
    scanf("%d",&n);
    printf("enter the array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element to search: ");
    scanf("%d",&key);

    for(i=0;i<n-1;i++)
    {
        if(a[i]==key){
            found=1;
            printf("the element found at position %d",i+1);
            break;
        }
       
    }
    if(found==0){
        printf("element not found ");
    }
    return 0;


}