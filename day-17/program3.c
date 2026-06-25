#include<stdio.h>
int main(){
    int i,j,n1,n2,a[100],b[100];
    printf("Enter the size of first array: ");
    scanf("%d",&n1);
    printf("Enter the first array elements: ");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the size of second array:  ");
    scanf("%d",&n2);
    printf("Enter the second array elements: ");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    printf("the common elements of array are: ");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(a[i]==b[j]){
                printf("%d",a[i]);
                break;
            }
        }
    }
    return 0;
}