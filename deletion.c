#include<stdio.h>
int main()
{
    int n,i,a[10],pos;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position at which no is to be deleted");
    scanf("%d",&pos);
    if(pos<=0||pos>n)
    {
        printf("invalid position");
    }
    else
    {
       for(i=pos-1;i<n-1;i++)  
       a[i]=a[i+1];
       n--;
       for(i=0;i<n;i++)
       {
        printf("%d",a[i]);
       }  
    }
}