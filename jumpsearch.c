#include<stdio.h>
#include<math.h>
int JS(int b[],int x,int key)
{
    int i,start,end,j,m;
    m=sqrt(x);
    i=0;
    while(i<x&&key>b[i])
    {
        i=i+m;
    }
    if(i<x)
    {
        if (b[i]==key)
        {
            return i;
        }
        else
        {
            start=i-m+1;
            end=i-1;
            for(j=start;j<=end;j++)
        {
           if(key==b[j])
           {
            return j;
           }
        return -1;
        }
        }
    }
    else
     return -1;
}
int main()
{
   
 int b[50],n,size,index,i,p;
    printf("enter the size of the array");
    scanf("%d",&size);
    printf("enter the no to be searched");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("the elements of array are%d\n",b[i]);
    }
    printf("\n");
    index=JS(b,size,n);
    if(index==-1)
    {
       printf("number is not found");
    }
    else
    {
        printf("number is found");
    }
    return 0;
}