/*Q80 (2D Arrays)
Multiply two matrices.*/
#include <stdio.h>
int main()
{
    int arr1[10][10], arr2[10][10], result[10][10], r1, c1, r2, c2, i, j, k;
    printf("Enter number of rows and columns for first matrix: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &arr1[i][j]);
    printf("Enter number of rows and columns for second matrix: ");
    scanf("%d%d", &r2, &c2);
    if (c1 != r2)
    {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &arr2[i][j]);
    // Initialize result matrix to zero
    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            result[i][j] = 0;
    // Multiply matrices
    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            for (k = 0; k < c1; k++)
                result[i][j] += arr1[i][k] * arr2[k][j];
    printf("The resultant matrix is:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }
    return 0;
}