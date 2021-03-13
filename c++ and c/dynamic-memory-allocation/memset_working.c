// C program to demonstrate working of memset() 
#include <stdio.h> 
#include <string.h> 

void printArray(int arr[], int n) 
{ 
for (int i=0; i<n; i++) 
	printf("%d ", arr[i]); 
} 

int main() 
{ 
	int n = 10; 
	int arr[n]; 
	// fill whole array with 100
	memset(arr, 0, n*sizeof(arr[0])); //set array values to 0 as memset works 
	//memset(arr, 10, n*sizeof(arr[0])); //doesn’t set array values to 10 as memset works character by character and an integer contains more than one bytes (or characters)
	printf("Array after memset()\n"); 
	printArray(arr, n); 

	return 0; 
} 