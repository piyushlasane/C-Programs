#include<stdio.h>
int main()
{
    int a[2][4],i,j, sum=0;
    printf("Enter 8 values :\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
            sum+=a[i][j];
        }
    }
    printf("Total is %d", sum);
    return 0;
}