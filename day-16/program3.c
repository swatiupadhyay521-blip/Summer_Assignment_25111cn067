#include<stdio.h>
int main(){
    int i,j,a[100],sum,n;
    printf("Enter the number of elements of array: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    printf("enter the required sum: ");
    scanf("%d",&sum);
    printf("pairs are:\n");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                printf("%d %d\n",a[i],a[j]);
            }
        }
    }
    return 0;

}