#include<stdio.h>
LS(int b[],int x)
{   
    int i,size,index;
        for(i=0;i<size;i++)
        {
            if(b[i]==x)
            {
                printf("number found at index%d",i);
                index=1;
                break;
            }
        }
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
    index=LS(b,n);
    if (index==0)
    {
        printf("number is not found");
    }
}