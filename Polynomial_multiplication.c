#include <stdio.h>
#include <stdlib.h>
void createArray(int *array, int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        printf("Enter the coefficient at exponent %d:", i);
        scanf("%d", (array + i));
    }
}
void printArray(int *array, int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        if (i >= 1)
        {
            printf("%d x^%d + ", *(array + i), i);
        }
        else
        {
            printf("%d", *(array + i));
        }
    }
}
void polynomialMultiplication(int *array1, int *array2, int *product, int s1, int s2)
{
    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j < s2; j++)
        {
            *(product + i + j) += (*(array1 + i)) * (*(array2 + j));
        }
    }
}
int main()
{
    int m, n, size;
    printf("Enter the highest exponent of the polynomial 1:\n");
    scanf("%d", &m);
    printf("Enter the highest exponent of the polynomial 2:\n");
    scanf("%d", &n);
    size = m + n + 1;
    printf("%d\n", size);
    m = m + 1;
    n = n + 1;
    printf("%d %d\n", m, n);
    int *polynomial_1;
    polynomial_1 = (int *)calloc(m, sizeof(int));
    int *polynomial_2;
    polynomial_2 = (int *)calloc(n, sizeof(int));
    int *product;
    product = (int *)calloc(size, sizeof(int));
    printf("Create polynomial 1:\n");
    createArray(polynomial_1, m);
    printArray(polynomial_1, m);
    printf("\nCreate polynomial 2:\n");
    createArray(polynomial_2, n);
    printArray(polynomial_2, n);
    printf("\nPolynomial Multiplication:\n");
    polynomialMultiplication(polynomial_1, polynomial_2, product, m, n);
    printArray(product, size);
    return 0;
}