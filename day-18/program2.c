#include<stdio.h>
int main(){
    int i,a[100],low,mid,n,key,high;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    printf("Enter the element to search: ");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==key){
            printf("element is found at position %d: ",mid+1);
            return 0;

        }
        else if(key>a[mid]){
            low=mid+1;

        }
        else{
            high=mid-1;
        }


    }
    printf("Element not found: ");
    return 0; 
}