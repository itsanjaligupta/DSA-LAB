#include<stdio.h>
int main()
{
    int n,i,a[10],num,sn,sa=0;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sn=n*(n+1)/2;
    printf("sum of n natural no is%d",sn);
    for(i=1;i<n;i++)
    {
        sa=sa+a[i];
    }   
        printf("sum of given array is%d",sa);
    num=sn-sa;
    printf("the missing no is %d",num);
    return 0;
}

