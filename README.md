# Binary-Search
## Aim
To perform binary search in an array 
## Theory 
Binary search can only be used for sorted arrays, but it's fast as compared to linear search. If you wish to use binary search on an array which isn't sorted, then you must sort it using some sorting technique say bubble sort and then use the binary search algorithm to find the desired element in the list. If the element to be searched is found then its position is printed.

## Algorithm
int binary_search(int array[],int key, int l,int r
	int mid
	mid=(l+r)/2
	if(array[mid]==key)
	printf->Key Found
	return mid
	else if(array[mid]>key)
	binary_search(array,key,l,mid-1)
	else if(array[mid]<key)
	binary_search(array,key,mid+1,r)
	else
	Element Not found
  
## Conclusion
It works 
