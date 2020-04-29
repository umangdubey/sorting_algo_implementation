#include <stdio.h>
#define max 100

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf("\n");
    }
    printf("\n");
}
void selection_sort(int arr[],int n){
     int i,j,min;
     for(i=0;i<n;i++)
     { 
         min=i;
         for(j = i+1;j<n;j++){
             if(arr[j]<arr[min])
             min=j;
         } 
         swap(&arr[min], &arr[i]);
        
     }
}

int main() {
    int n,arr[max];
    printf("please enter the no of element : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("please enter the array element arr[%d] :",i);
        scanf("%d",&arr[i]);
        
    }
   selection_sort(arr,n);
   printf("after sorting array :  \n ");
   display(arr,n);

   return 0;
}