#include<stdio.h>
int main(){
int missing,total,sum=0,i,n;
printf("Enter the number of elements in array: ");
scanf("%d",&n);
int a[n-1];
printf("enter %d elements\n",n-1);
for(i=0;i<n-1;i++){
    scanf("%d",&a[i]);
    sum=sum+a[i];
}
total=n*(n+1)/2;
missing=total-sum;
printf("the missing element in the array is %d",missing);
return 0;

}
