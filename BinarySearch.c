#include <stdio.h>
#include <stdlib.h>

//Cmp function for qsort function
int cmpfunc(const void * a,const void * b){
    return ( *(int*)a - *(int*)b );
}

//Binary Search Function
int binarySearch(int target,int arr[],int low,int high){
    if(low > high){
        return -1;
    }else{
        int mid = low + (high - low)/2;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]>target){
            return binarySearch(target,arr,low,mid-1);
        }else{
            return binarySearch(target,arr,mid+1,high);
        }
    }
}
int main(){
    int size;
    printf("enter the size of an array: ");
    scanf("%d",&size);
    int arr[size],i;
    printf("enter the elements: ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    printf("enter the target: ");
    scanf("%d",&target);
    qsort(arr,size,sizeof(int),cmpfunc);
    printf("elements after sorting\n");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int pos = binarySearch(target,arr,0,size-1);
    if(pos==-1){
        printf("element not found.....");
    }else{
        printf("index = %d",pos);
    }
}