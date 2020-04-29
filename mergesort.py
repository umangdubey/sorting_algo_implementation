from array import *


def merge_sort(arr):
    if len(arr)>1:
        mid=len(arr)//2
        L= arr[ :mid]
        R=arr[mid: ]

        merge_sort(L)
        merge_sort(R)
        i=j=k=0

        while i<len(L) and j<len(R):
            if L[i]<R[i]:
                arr[k]=L[i]
                i +=1
            else :
                arr[k]=R[j]
                j +=1

            k +=1

        while i < len(L): 
            arr[k] = L[i] 
            i+=1
            k+=1
          
        while j < len(R): 
            arr[k] = R[j] 
            j+=1
            k+=1
            
    print("array after sorting")
    print(arr)
                




arr=array('i',[])

n=int(input("enter the no of elemnt in array :"))

for i in range(n):
        x=int(input("enter the element array :"))
        arr.append(x)


print("array before sorting")       
print(arr)

merge_sort(arr)

