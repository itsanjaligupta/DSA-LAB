#include<stdio.h>
int TS(int b[],int x,int l,int h)
{
    if(l<=h)
    {
        int mid1= l+((l+h)/3);
        int mid2= h-((l+h)/3);
        if(x<b[mid1])
        {
           TS(b,x,l,mid1-1);
        }
        else if (x>b[mid2])
        {
            TS(b,x,mid2+1,h);
        }
        else if (x==b[mid1])
        {
            printf("no found at index%d",mid1+1);
        }
        else if (x==b[mid2])
        {
            printf("no found at index%d",mid2+1);
        }
        else
        {
            TS(b,x,mid1+1,mid2-1);
        }
    }return 1;
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
    index=TS(b,n,low,high);
    if (index==1)
    {
        printf("number is found");
    }
    else
    {
        printf("number is not found");
    }
}