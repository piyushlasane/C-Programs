#include <stdio.h>

int main()
{
    int num, i = 0;
    printf("Enter number you want multiplication table of:\n");
    scanf("%d", &num);

    printf("Multiplication table of %d is:\n", num);
    while(i<10)
    {
        i++;
        printf("%d x %d  = %d\n", num, i, num * i);
    }

    return 0;
}
