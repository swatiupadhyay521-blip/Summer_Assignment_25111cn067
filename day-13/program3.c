#include<stdio.h>
int main(){
    int i,a[100],n,largest,smallest;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    largest=smallest=a[0];
    for(i=0;i<n;i++){
        if(a[i]>largest)
        largest=a[i];
        if(a[i]<smallest)
        smallest=a[i];


    }
    printf("largest element is %d\n",largest);
    printf("smallest element is %d\n",smallest);
}