#include<stdio.h>
int binarysearchiterative(int *,int,int);
int binarysearchrecursive(int *,int,int,int,int);
int main(){
    printf("1)Iterative Binary Search\n");
    printf("2)Recursive Binary Search\n");
    printf("Enter your choice:");
    int choice,index;
    scanf("%d",&choice);
    if(choice<1&&choice>2){
        printf("Invalid Choice");
    }
    else{
        printf("Enter the no of elements required:");
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            printf("Enter the element of the array:");
            scanf("%d",&arr[i]);
        }
        printf("Enter the element to search for:");
        int element;
        scanf("%d",&element);
        switch(choice){
            case 1:
                index=binarysearchiterative(arr,element,n);
                if(index==-1){
                    printf("Element not found");
                }
                else{
                    printf("Element found at index %d",index);
                }
                break;
            case 2:
                index=binarysearchrecursive(arr,element,n,0,n-1);
                if(index==-1){
                    printf("Element not found");
                }
                else{
                    printf("Element found at index %d",index);
                }
                break;            
        }
    }
}
int binarysearchiterative(int *arr,int element,int size){
    int start=0,end=size-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==element){
            return mid;
        }
        else{
            if(arr[mid]>element){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
    }
    return -1;
}
int binarysearchrecursive(int *arr,int element,int size,int start,int end){
    if(start>end){
        return -1;
    }
    else{
        int mid=start+(end-start)/2;
        if(arr[mid]==element){
            return mid;
        }
        else{
            if(arr[mid]>element){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            return binarysearchrecursive(arr,element,size,start,end);
        }
    }
}
