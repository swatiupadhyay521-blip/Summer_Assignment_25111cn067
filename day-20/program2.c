#include<stdio.h>
int main(){
 int i,j,n,a[100][100],flag=1;
 printf("enter the order of an array: ");
 scanf("%d",&n);
 printf("enter the elements of array:\n ");
 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!=a[j][i]){
                flag=0;
                break;
            
        }
    }

        if(flag==0)
            break;
}
    
    if(flag==1){
        printf("the matrix is symmetric ");


    }
    else{
        printf("not symmetric ");
    }


    return 0;
 }
