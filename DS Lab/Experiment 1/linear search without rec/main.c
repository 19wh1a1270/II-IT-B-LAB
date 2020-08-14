#include <stdio.h>
int linear_search(int arr[], int n, int t)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == t)
            return i;
    }
    return -1;
}
void main()
{
    int arr[] = {10, 6, 8, 15, 20, 3, 14, 99, 66, 30};
    int t = 0;
    int n = sizeof(arr) / 4;
    int result = linear_search(arr, n, t);
    if (result == -1)
        printf("Element is not  in the array ");
    else
        printf("Element %d is present at index %d", t, result);
    return 0;
}
    