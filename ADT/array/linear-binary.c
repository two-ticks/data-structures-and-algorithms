#include<stdio.h>

int linearSearch (int arr[],int size, int element){
    for (int i=0;i<size; i++){
        if(arr[i]==element)
        {
            return i;
        }
    }
     return -1;
}

int binarySearch(int arr[], int size, int element){
    int mid, high, low;
    low = 0;
    high = size-1;
    

    while (low<=high)
    {
        mid = (low+high)/2;
        if (arr[mid] == element){
            return mid;
        }

        if(arr[mid] < element){
            low = mid+1;
        }

        else {
            high = mid -1;
        }
    }
    
    return -1;

}

int main(){
    // unsorted array for linear search
    // int arr[] = {1,3,4,55,64,43,34,44,522,34};
    // int size = sizeof(arr)/sizeof(int);
    
    // sorted array for binary search
    int arr[] = {1,3,4,55,64,222,522};
    int size = sizeof(arr)/sizeof(int);
    
    int element = 64;
    int searchIndex = binarySearch(arr,size,element);
    printf("%d at %d\n", element, searchIndex);
    return 0;
}