#include <stdio.h>
#define PI 3.14
int main()
{
    int a = 8;
    const float b = 7.333;
    printf(" tab character \t\t my backslash \a%f", PI);
    // PI = 7.33; // can not do this since PI is a constant
    // b = 7.22; // can not do this since b is a constant
    //  printf("Hello world\n");
    //  printf("The value of a is %d and the value of b is %2.4f\n", a, b);

    return 0;
}
