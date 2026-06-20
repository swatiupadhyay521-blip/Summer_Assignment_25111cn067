#include<stdio.h>
int main(){
    int i,j=0,temp,n,a[100];
    printf("enter the number of elements of array: ");
    scanf("%d",&n);
    printf("enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++){
        if(a[i]!=0){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
    printf("array after moving zeros: \n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;

}