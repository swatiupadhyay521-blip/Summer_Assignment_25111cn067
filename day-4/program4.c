#include<stdio.h>
int main(){
    int start,end,num,originalnum,rem,result=0;
    printf("enter the value of starting range ");
    scanf("%d",&start);
    printf("enter the value of ending range ");
    scanf("%d",&end);
    printf("armstrong numbers are:\n");
    for(num=start;num<=end;num++)
    {
        originalnum=num;
        result=0;
        while(originalnum!=0)
    {
        rem=originalnum%10;
        result+=rem*rem*rem;
        originalnum=originalnum/10;


    }
    
    if(result==num)
    {
        printf("%d ",num);
    }
}
    return 0;

}