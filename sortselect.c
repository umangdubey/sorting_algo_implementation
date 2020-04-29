// C program for implementation of selection sort 
#include <stdio.h> 

void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 

void selectionSort(int arr[], int n) 
{ 
	int i, j, min_idx;  
	for (i = 0; i < n-1; i++) 
	{  
		min_idx = i; 
		for (j = i+1; j < n; j++) 
		if (arr[j] < arr[min_idx]) 
			min_idx = j; 
 
		swap(&arr[min_idx], &arr[i]); 
	} 
} 

void printArray(int arr[], int n) 
{ 
	int i; 
	for (i=0; i <n; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 
 
int main() 
{ 
 int n,arr[100];
    printf("please enter the no of element : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("please enter the array element arr[%d] :",i);
        scanf("%d",&arr[i]);
        
    }
	selectionSort(arr, n); 
	printf("Sorted array: \n"); 
	printArray(arr, n); 
	return 0; 
} 
