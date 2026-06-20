#include<stdio.h>
int main(){
    int i,a[100],temp,n;
    printf("enter the number of elements of array: ");
    scanf("%d",&n);
    printf("enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    temp=a[n-1];
    for(i=n-1;i>=0;i--){
        a[i]=a[i-1];
    }
    a[0]=temp;
    printf("array after right rotation: \n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);

    }
    return 0;
}