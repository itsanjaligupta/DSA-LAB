#include<stdio.h>
int main()
{
    int n,i,a[10],num,pos;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the no to be entered");
    scanf("%d",&num);
    printf("enter the position at which no should be entered");
    scanf("%d",&pos);
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    n++;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}