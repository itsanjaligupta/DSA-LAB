
#include <stdio.h>
int main()
{
    int A[5], B[5], C[10];
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        printf("enter the elements of array");
        scanf("%d", &A[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d", A[i]);
    }
    printf("\n");
    for (j = 0; j < 5; j++)
    {
        printf("enter the elements of array");
        scanf("%d", &B[j]);
    }
    printf("\n");
    for (j = 0; j < 5; j++)
    {
        printf("%d", B[j]);
    }
    i = 0;
    j = 0;
    while (i < 5 && j < 5)
    {
        if (A[i] < B[j])
        { 
            C[k]=A[i];
            i++;
            k++;
        }
        else if (A[i] > B[j])
        {
            C[k]=B[j];
            j++;
            k++;
        }
        else
        {
            i++;
            j++;
        }
    }
    while (i < 5)
    {
        C[k] = A[i];
        i++;
        k++;
    }
    while (j < 5)
    {
        C[k] = B[j];
        j++;
        k++;
    }
    for (j = 0; j < k; j++)
    {
        printf("  %d  ", C[j]);
    }
}