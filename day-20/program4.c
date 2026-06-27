#include<stdio.h>
int main(){
    int i,j,r,c,a[100][100],sum=0;
    printf("enter the value of rows and columns: ");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of matrix: ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
        printf("the column wise sum is\n: ");
        for(j=0;j<c;j++){
            sum=0;
            for(i=0;i<r;i++){
                sum=sum+a[i][j];
            }
        }
        printf("row %d sum is %d\n",j+1,sum);

    }
    return 0;
}