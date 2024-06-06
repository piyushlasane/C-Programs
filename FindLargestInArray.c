#include <stdio.h>
#include <stdlib.h>
int returnmax(int *arr, int n){
    int max=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[]={1,1,2,51,56,999,251,514,662,2651,64545};
    int max=returnmax(arr, sizeof(arr)/sizeof(arr[0]));
    printf("%d is the largest element of array\n", max);
    return 0;
}