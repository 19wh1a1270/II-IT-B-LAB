#include <stdio.h>
int linear_search(int arr[], int n, int t)
{
    int i;
    if (n == 0)
    {
        return 0;
    }
    else if ( arr[n - 1] == t)
    {
        return n - 1;
    }
    else 
    {
        return linear_search(arr, n - 1, t);
    }
}
void main()
{
    int arr[] = {10, 6, 8, 15, 20, 3, 14, 99, 66, 30};
    int t = 0;
    int n = sizeof(arr) / 4;
    int result = linear_search(arr, n, t);
    if (result == 0)
        printf("Element is not  in the array ");
    else
        printf("Element %d is present at index %d", t, result);
    return 0;
}
    