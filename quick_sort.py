from array import *

def partition(arr,low,high):
    i=low-1
    pivot=arr[high]

    for j in range(low,high):
        if arr[j]<pivot:
            i=i+1
            arr[i],arr[j]=arr[j],arr[i]

    arr[i+1],arr[high]=arr[high],arr[i+1]
    return(i+1)

def quick_sort(arr,low,high):
    if low<high:
        pi=partition(arr,low,high)

        quick_sort(arr,low,pi-1)
        quick_sort(arr,pi+1,high)




        
arr=array('i',[])

n=int(input("enter the no of elemnt in array :"))

for i in range(n):
        x=int(input("enter the element array :"))
        arr.append(x)


print("array before sorting")       
print(arr)

quick_sort(arr,0,n-1)

print("array after sorted ")
print(arr)

