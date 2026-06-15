#include<stdio.h>
int main(){
    int a[100],i,n;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}

printf("array elements are:\n");
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
}