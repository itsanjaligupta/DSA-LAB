#include<stdio.h>
int main()
{
    int m,n,i,j,a[10][10],b[10][10];
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
        for (i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
               b[i][j]=a[j][i];
               printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
    
}
