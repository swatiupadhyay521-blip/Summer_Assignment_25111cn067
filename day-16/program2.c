#include<stdio.h>
int main(){
    int i,j,a[100],maxfrequency=0,count=1,n,element;
    printf("enter the number of elements of array: ");
    scanf("%d",&n);
    printf("enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }

        }
        if(count>maxfrequency){
            maxfrequency=count;
            element=a[i];
        }
    }
    printf("the element of max frequency is %d",element);
    return 0;
}