
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
    for (int i = size-1; i >= 0; i--)
    {
        if (i+1 > 1)
        {
            printf("%d x^%d + ", *(array + i), i);
        }
        else
        {
            printf("%d", *(array + i));
        }
    }
}
void polynomialAddition(int *array1, int *array2, int *s, int s1, int s2, int max, int min)
{
    for (int i = 0; i <= min; i++)
    {
        *(s + i) = (*(array1 + i) + *(array2 + i));
    }
    if (s1 > s2)
    {
        for (int i = min+1; i <= max; i++)
        {
            *(s + i) =*(array1+i);
        }
    }
    else{
        for (int i = min+1; i <= max; i++)
        {
            *(s + i) =*(array2+i);
        }
    }
}
int main()
{
    int m, n, index, max, min;
    printf("Enter the highest exponent of the polynomial 1:\n");
    scanf("%d", &m);
    printf("Enter the highest exponent of the polynomial 2:\n");
    scanf("%d", &n);
    if (m > n)
    {
        max = m;
        min = n;
    }
    else
    {
        max = n;
        min = m;
    }
    int *polynomial_1;
    polynomial_1 = (int *)calloc(m+1, sizeof(int));
    int *polynomial_2;
    polynomial_2 = (int *)calloc(n+1, sizeof(int));
    int *sum;
    sum = (int *)calloc(max+1, sizeof(int));
    printf("Create polynomial 1:\n");
    createArray(polynomial_1, m+1);
    printArray(polynomial_1, m+1);
    printf("\nCreate polynomial 2:\n");
    createArray(polynomial_2, n+1);
    printArray(polynomial_2, n+1);
    printf("\nPolynomial Addition:\n");
    polynomialAddition(polynomial_1,polynomial_2,sum,m+1,n+1,max,min);
    printArray(sum,max+1);

    return 0;
}