#include <stdio.h>
int starpattern(int rows)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
int reverseStar(int rows)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j <= rows - i - 1; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
int main()
{
    int rows, type;
    printf("Enter number of rows : ");
    scanf("%d", &rows);
    printf("If you want Star Pattern Press 0\nIf you want reverse Star Pattern Press 1\n");
    scanf("%d", &type);
    switch (type)
    {
    case 1:
        reverseStar(rows);
        break;
    case 0:
        starpattern(rows);
        break;
    default:
        printf("Invalid input !");
        break;
    }
    return 0;
}