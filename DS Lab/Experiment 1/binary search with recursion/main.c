#include<stdio.h>
int Binary_search(int A[], int start, int end, int t);
int main() 
{
   int A[] = {3, 6, 8, 10, 14, 15, 20, 30, 66, 99};
   int t = 6;
   int n = sizeof(A) / 4;
   int start = 0;
   int end = n - 1;
   int result = Binary_search(A, start, end, t);
   if (result != -1)
        printf("Element %d is present at index %d", t, result);
    else
        printf("Element is not in the array");
   return 0;
}
int Binary_search(int A[], int start, int end, int t) 
{
    if ( start > end)
        return -1;
    int mid = (start + end) / 2;
    if( A[mid] == t) 
        return mid;
    else if( t < A[mid] )
        Binary_search(A, start, mid - 1, t);
    else 
        Binary_search(A, mid + 1, end, t);
}

