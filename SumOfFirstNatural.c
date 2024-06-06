#include <stdio.h>
int main()
{
    int i, num, sum=0;
    // while(1)
    // {
    //     printf("\nEnter last number to get sum: ");
    //     scanf("%d", &num);
    //     sum=0;
    //     for (i = 1; i <= num; i++)
    //     {
    //         sum += i;
    //     }
    //     printf("%d is the sum till %d.", sum, num);
    // }

    while(1)
    {
        printf("\nEnter last number to get sum: ");
        scanf("%d", &num);
        sum=num*(num+1)/2;
        printf("%d is the sum till %d.", sum, num);
    }
    return 0;
}