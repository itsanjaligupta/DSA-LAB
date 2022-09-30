#include<stdio.h>
int main()
{
    int m,n,p,q,i,j,k,a[10][10],b[10][10],c[10][10];
    printf("enter no of rows and columns of matrix1 ");
    scanf("%d%d",&m,&n);
    printf("enter elements of a matrix1");
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("enter no of rows and columns of matrix 2");
    scanf("%d%d",&p,&q);
    printf("enter elements of matrix 2");
    for (i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for (i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    if (n==p)
    {
        for (i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            { c[i][j]=0;
            for(k=0;k<n;k++)
            {
               c[i][j]+=a[i][k]*b[k][j];
            }
               printf("%d\t",c[i][j]);
             } printf("\n");
        }
    }      
    else
    {
        printf("multiplication is not possible");
    }
    
}
