# Aim Of The Experiment
Write a program that use recursive functions to perform the linaer search opeation for a key value in a given list of integers
## Description
A linear search is a method for finding an element within a list. It sequentially checks each element of the list until a match is found or the whole list has been searched
### Step-by-step procedure for the experiment
1.Define a function with name linear search which will return 0 if the number of elements in the array is zero, and if not then call the linear search function again with elements 1 less than the number of elements of the array, that will repeat till the key value is found and will return the index

2.Write the main fuction and call the linear search function. If the result is 0, then print that the element is not in the array and if the the element is present in the array then return the index value

### Output Obtained
Firstly the n value is taken i.e n is the number of elements in the list and if n is equal to zero then the result will return as 0 and print the result as the element is not present in the array and if n is not zero then the nth element will be cross checked with the target value and if it doesnt match the value of n will be decreased by 1 and again the linear search function is called , this will repeat till the target value is found.This will return the result element 66 is present at index 8

![Outout](out66.png)

since the element 0 is not present in the array, the n value will become 0 till the end and the result will return as the element is not present in the array

![Output](out0.png)
