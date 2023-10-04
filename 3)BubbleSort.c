#include<stdio.h>
void bubblesortiterative(int *,int);
void bubblesortrecursive(int *,int,int,int);
int main(){
    printf("1)Iterative Bubble Sort\n");
    printf("2)Recursive Bubble Sort\n");
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
                bubblesortiterative(arr,n);
                for(int i=0;i<n;i++){
                    printf("%d ",arr[i]);
                }
                break;
            case 2:
                bubblesortrecursive(arr,n,0,0);
                for(int i=0;i<n;i++){
                    printf("%d ",arr[i]);
                }
                break;            
        }
    }
}
void bubblesortiterative(int *arr,int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                int x=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=x;
            }
        }
    }
}
void bubblesortrecursive(int *arr,int size,int i,int j){
    if(i==size){
        return;
    }
    else{
        if(j==size-1){
            i++;
            j=0;
        }
        else{
            if(arr[j]>arr[j+1]){
                int x=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=x;
            }
            j++;
        }
        return bubblesortrecursive(arr,size,i,j);
    }
}
