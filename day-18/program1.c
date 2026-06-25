#include<stdio.h>
int main(){
    int i,j,temp,min,a[100],n;
    printf("enter the size of arraay: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }

        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;

    }
    printf("Sorted array is ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}