#include <stdio.h>

int main()
{
    float a = 7 / 4 * 9 / 2;        // The answer will be wrong   i.e, 4.000000
    printf("%f\n", a);              // Because operation between two integers returns Integer only
    float b = 7.0 / 4.0 * 9.0 / 2.0;      // Now answer will be correct i.e, 7.875000
    printf("%f", b);                // Because we have added the ".0" so the number becomes float
    return 0;                       // So Answer is also a float number
}