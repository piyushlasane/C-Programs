#include <stdio.h>
void display(char *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c ", arr[i]);
    }
}
int main()
{
    char arr[6] = "Piyush";
    int n = sizeof(arr) / sizeof(char);
    printf("Old array: ");
    display(arr, n);
    for (int i = 0; i < n / 2; i++)
    {
        char temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("\nNew array: ");
    display(arr, n);
    return 0;
}