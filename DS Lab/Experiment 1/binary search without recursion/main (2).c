#include<stdio.h>
int Binary_search(int A[], int n, int t);
int main() 
{
   int A[] = {3, 6, 8, 10, 14, 15, 20, 30, 66, 99};
   int t = 99;
   int n = sizeof(A) / 4;
   int result = Binary_search(A, n, t);
   if (result != -1)
        printf("Element %d is present at index %d", t, result);
    else
        printf("Element is not in the array");
   return 0;
}
int Binary_search(int A[], int n, int t) 
{
   int start = 0;
   int end = n - 1;
   while(start <= end) 
   {
      int mid = (start + end) / 2;
      if( A[mid] == t) 
      {
         return mid;
      }
      else if( t < A[mid] )
      {
         end = mid - 1;
      } 
      else 
      {
         start = mid + 1;
      }
   }
   return -1;
}
