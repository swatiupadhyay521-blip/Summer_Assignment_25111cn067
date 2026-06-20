#include<stdio.h>
int main(){
    int n,largest,secondlargest,i,a[100];
    printf("enter the number of elements in array: ");
    scanf("%d",&n);
    printf("enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    largest=secondlargest=-9999;
    for(i=0;i<n;i++)
    {
        if(a[i]>largest){
            secondlargest=largest;
            largest=a[i];
        }
        else if(a[i]>secondlargest && a[i]!=largest)
            {
               secondlargest=a[i];
            }

    

}
printf("Second largest elements of array is %d",secondlargest);
return 0;
}