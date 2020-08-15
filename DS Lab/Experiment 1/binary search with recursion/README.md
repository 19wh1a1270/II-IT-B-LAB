# Aim Of The Experiment
Write a program that use recursive functions to perform the binary search operation for a key value in a given list of integers
## Description
Binary Search is Searching a sorted array by repeatedly dividing the search interval in half. Begin with an interval covering the whole array. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise narrow it to the upper half. Repeatedly check until the value is found or the interval is empty
### Step-by-step procedure for the Output
# First target number : 6
1.Give the values of the array and take the number of elements in the array as n and t as the target number and the start is equal to 0 and end is equal to n - 1

2.Write a function with name binary search and will return -1 if start value is less than end value if not then mid term is equal to start + end / 2. If the mid term is equal to the target number then the index of the mid term will be returned or else if the target number is less than the mid value then call binary search function again with end value = mid term index - 1 and if the target number is greater than the mid term then call the binary search function again with the start value = mid term index + 1.This will repeat till the target number is found or if the element is not in the array

3.Here the given array is {3, 6, 8, 10, 14, 15, 20, 30, 66, 99}.

