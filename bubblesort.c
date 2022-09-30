#include<stdio.h>
int bubble(int a[10],int n)
 {  
    int p,s,t,i;
    for(p=0;p<n-1;p++)
    {
        for(s=0;s<n-p-1;s++)
        {
            if(a[s]>a[s+1])
            {
                t=a[s];
                a[s]=a[s+1];
                a[s+1]=t;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
 }
int main()
{
    int a[10],count,i;
    printf("enter the count of numbers");
    scanf("%d",&count);
    printf("enter the array");
    for(i=0;i<count;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble(a,count);
    return 0;
}   
   