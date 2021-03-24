#include<stdio.h>

void display(int arr[], int n){
    //traversal
for (int i=0;i<n;i++)
{
   printf("%d ",arr[i]); 
}
printf("\n");

}

void deletion(int arr[], int size, int index){
    //deletion

    for (int i = index; i < size; i++)
    {
        arr[i]=arr[i+1];
    }

}
int main()
{
    int arr[100] = {7,8,12,27,88};
    int size = 5, index = 1;
    display(arr,size);
    deletion(arr, size, index);
    size -=1;
    display(arr,size);
return 0;
}