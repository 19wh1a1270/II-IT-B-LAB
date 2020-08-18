#include<stdio.h>
void Bubble_sort(int arr[], int n);
int main()
{
	int arr[20], n, i;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
    }
    Bubble_sort(arr, n);
    for(i = 0; i < n; i++)
    {
    	printf("%3d", arr[i]);
	}
	return 0;

}
void Bubble_sort(int arr[], int n)
{
	int i, j, t, l=1, itr = 0;
	if(l = 1)
	{
	    for(i = 0; i < n; i++)
	    {
	        for(j = i + 1 ; j < i + 2; j++)
	        {
	            if(arr[i] < arr[j])
	            {
	            	itr++;
	                continue;
	                
	            }
	        }
	    }
	    if(itr == n - 1)
	    {
	    printf("the array is already sorted\n");
	    }
	    l++;
	 }
	 for(i = 0; i < n; i++)
	 {	
		for(j = i + 1; j < n ; j++)
		{			
		    if(arr[i] > arr[j])
			{
			    t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}	
	}
	
	
}
