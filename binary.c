#include<stdio.h>
#define max 100
int binary_search(int arr[],int a,int b,int x)
{     int mid= a + (b-1)/2;

       if (b>=a)
       {
           if (arr[mid]==x)
           return mid;

           if(arr[mid]>x)
           return binary_search(arr,a,mid-1,x);
           
           else 
           return binary_search(arr,mid+1,b,x);      
           
        }
  return -1;
    
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf("\n");
    }
    printf("\n");
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

    int x ;
    printf("enter the searching element : \n");
    scanf("%d",&x);
  int res = binary_search(arr,0,n-1,x);
       if (res==-1){
           printf("no element found : \n");
       }
       else {
           printf("after searching the index of element is : %d ");
       }

   return 0;
}