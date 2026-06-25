#include<stdio.h>
int main(){
    int i,j,a[100],n,temp;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){

                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }
    printf("The bubble short of array: ");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0; 
}