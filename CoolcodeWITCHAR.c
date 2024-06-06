#include <stdio.h>
#include <string.h>

char* o(char* a, int d)
{
    int n = strlen(a);
    for (int i = 0; i < d; i++)
    {
        a[n]=a[0];
        for (int i = 0; i < n+1; i++)
        {
            a[i]=a[i+1];
        }
        
    }
    return a;
}

int main()
{
    char arr1[100];
    char arr2[100];
    scanf("%s", arr1);
    int d;
    scanf("%d", &d);
    scanf("%s", arr2);
    char* k = o(arr1, d);
    if (*k == *arr2)
    {
        printf("\nYES");
    }
    else printf("\nNO");
    return 0;
}