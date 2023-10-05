#include<stdio.h>
void insertionsortiterative(int *,int);
void insertionsortrecursive(int *,int,int,int,int);
int main(){
    printf("1)Iterative insertion Sort\n");
    printf("2)Recursive insertion Sort\n");
    printf("Enter your choice:");
    int choice;
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
        switch(choice){
            case 1:
                printf("Before Sorting:");
                for(int i=0;i<n;i++){
                    printf("%d ",arr[i]);
                }
                printf("\n");
                insertionsortiterative(arr,n);
                printf("After Sorting: ");
                for(int i=0;i<n;i++){
                    printf("%d ",arr[i]);
                }
                break;
            case 2:
                printf("Before Sorting:");
                for(int i=0;i<n;i++){
                    printf("%d ",arr[i]);
                }
                printf("\n");
                insertionsortrecursive(arr,n,0,0,arr[1]);
                printf("After Sorting: ");
                for(int i=0;i<n;i++){
                    printf("%d ",arr[i]);
                }
                break;            
        }
    }
}
void insertionsortiterative(int *arr,int size){
    for(int i=0;i<size-1;i++){
        int key=arr[i+1],j;
        for(j=i;j>=0;j--){
            if(arr[j]>key){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=key;
    }
}
void insertionsortrecursive(int *arr,int size,int i,int j,int key){
    if(i==size-1){
        return;
    }
    else{
        if(arr[j]<key||j==-1){
            arr[j+1]=key;
            i++;
            key=arr[i+1];
            j=i;
        }
        else{
            arr[j+1]=arr[j];
            j--;
        }
        return insertionsortrecursive(arr,size,i,j,key);        
    }
}
