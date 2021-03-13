// memset() fill a BLOCK of memory with a particular value
#include <stdio.h> 
#include <string.h> 

int main() 
{ 
	char str[50] = "C-programming is for programming geeks."; 
	printf("\nBefore memset(): %s\n", str); 

	// Fill 8 characters starting from str[13] with '.' 
	memset(str + 13, '.', 8*sizeof(char)); 

	printf("After memset(): %s", str); 
	return 0; 
} 
