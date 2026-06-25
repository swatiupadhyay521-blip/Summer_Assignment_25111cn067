#include<stdio.h>

int main()
{
    int n1,n2,i,j,found,size,a[100],b[100],c[100];

    printf("Enter size of first array: ");
    scanf("%d",&n1);


    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d",&n2);


    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }

    size=0;

    for(i=0;i<n1;i++)
    {
        c[size++]=a[i];
    }

    for(i=0;i<n2;i++)
    {
        found=0;

        for(j=0;j<size;j++)
        {
            if(b[i]==c[j])
            {
                found=1;
                break;
            }
        }

        if(found==0)
        {
            c[size++]=b[i];
        }
    }

    printf("Union Array:\n");

    for(i=0;i<size;i++)
    {
        printf("%d ",c[i]);
    }

    return 0;
}