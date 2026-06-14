#include<stdio.h>
int palindrome(int n);
    int main(){
        int num;
        printf("enter the value of number: ");
        scanf("%d",&num);
        if(palindrome(num))
        printf("the number is palindrome ");
        else
        printf("the number is not palindrome ");
        return 0;
    }
int palindrome(int n)
{
    int rev=0,rem,temp;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
     return 1;
     else
     return 0;
}
