#include<stdio.h>
int main(){
    int a[100],i,sum=0,n;
    float avg;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=(float)sum/n;
    printf("sum of array is %d\n ",sum);
    printf("avg of array  is %f\n",avg);
}