#include<stdio.h>
BS(int b[],int x,int l,int h)
{
    if(l<=h)
    {
        int mid=(l+h)/2;
        if(x<b[mid])
        {
           BS(b,x,l,mid-1);
        }
        else if (x>b[mid])
        {
            BS(b,x,mid+1,h);
        }
        else
        {
            printf("%d\n",mid+1);
            return 1;
        }
    }
}
int main()
{
    int b[50],n,low,high,size,index,i;
    printf("enter the size of the array");
    scanf("%d",&size);
    printf("enter the no to be searched");
    scanf("%d",&n);
    low=0;
    high=size-1;
    printf("enter the elements of array");
    for(i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d",b[i]);
    }
    printf("\n");
    index=BS(b,n,low,high);
    if (index==1)
    {
        printf("number is found");
    }
    else
    {
        printf("number is not found");
    }
}