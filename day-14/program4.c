#include<stdio.h>
int main(){
    int i,j,n,a[100];
    printf("enter the number of elements of array: ");
    scanf("%d",&n);
    printf("enter the array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("the duplicate of array %d\n",a[i]);
                break;
            }
        }
    }
    return 0;
}