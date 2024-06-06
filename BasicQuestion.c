#include <stdio.h>
int main()
{
    int a, b, n;
    a = printf("Hello");
    printf("\n%d\n", a);

    b = scanf("%d", &n);
    printf("\n%d", b);
    printf("\n%d", n);
    return 0;
}