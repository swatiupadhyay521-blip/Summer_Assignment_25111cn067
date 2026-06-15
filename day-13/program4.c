#include<stdio.h>
int main(){
    int i,n,even=0,odd=0,a[100];
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++){
        if(a[i]%2==0)
        {
            even++;
        }
        else{
        odd++;}
    }
    printf("the number of even elements are %d\n",even);
    printf("the number of odd elements are %d\n",odd);
}