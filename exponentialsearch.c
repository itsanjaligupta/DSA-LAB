#include<stdio.h>
int ES(int b[],int x, int key)
{
    int i=0,k,j,start,end;
    while(i<x,key>b[i])
    {
    i=2*i;
    i++;
    }
    if(i<x)
    {
      if(key==b[i])
      return i;
    else if (key<b[i])
    {
        start=(i/2)+1;
        end=i-1;
        for(j=start;j<=end;j++)
        {
            if(key==b[j])
            return j;
        }
    }
    else
    {
        for(k=i;k<x;k++)
        {
            if (key==b[k])
            return k;
            break;
        }
    }
    }
    return -1;
}
int main()
{
    int b[50],n,size,index,i;
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
        printf("%d",b[i]);
    }
    printf("\n");
    index=ES(b,size,n);
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