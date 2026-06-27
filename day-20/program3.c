#include<stdio.h>
int main(){
    int i,j,r,c,a[100][100],sum=0;
    printf("enter the row and columns  of matrix: ");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of matrix: ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
        printf("row wise sum:\n ");
        for(i=0;i<r;i++){
            sum=0;
            for(j=0;j<c;j++){
                sum=sum+a[i][j];


            }
            printf("row %d sum is %d\n",i+1,sum);
        }
    
    return 0;
}