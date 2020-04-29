#include<stdio.h>
#define max 100

int linear_search(int arr[],int a,int b,int x)
{
        if(b<a)
          return -1;
        if (arr[a]==x)
          return a;
        if (arr[b]==x)
          return b;

        return linear_search(arr,a+1,b-1,x);      
        
        
        
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

    int num;
    printf("enter the searching element : \n");
    scanf("%d",&num);
  int res = linear_search(arr,0,n-1,num);
       if (res!=-1){
           printf("after %d searching the index of element is : %d",num,res);
       }
       else {
           printf("ano element found");
       }

   return 0;
}