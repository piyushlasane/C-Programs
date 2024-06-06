#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the size of array want to create : ");
    if (scanf("%d", &n) != 1 || n <= 0) // checking if user give improper value for array size
    {
        printf("Invalid input for array size");
        return 1;
    }
    int *a = (int *)malloc(n * sizeof(int));
    if (a == NULL) // checking of memory allocated or not
    {
        printf("\nMemory allocation failed\n");
        return 1;
    }

    printf("Enter the elements of array : ");
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &a[i]) != 1) // checking if
        {
            printf("Invalid input for a 'integer array' element");
            return 1;
        }
    }
    printf("The elements of array are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    free(a);
    return 0;
}