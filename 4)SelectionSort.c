#include<stdio.h>
void selectionsortiterative(int *,int);
void selectionsortrecursive(int *,int,int,int,int);
int main(){
    printf("1)Iterative Selection Sort\n");
    printf("2)Recursive Selection Sort\n");
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
                selectionsortiterative(arr,n);
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
                selectionsortrecursive(arr,n,0,1,0);
                printf("After Sorting: ");
                for(int i=0;i<n;i++){
                    printf("%d ",arr[i]);
                }
                break;            
        }
    }
}
void selectionsortiterative(int *arr,int size){
    for(int i=0;i<size;i++){
        int key=i,j=i+1;
        while((j<size)&&(arr[j]<arr[key])){
            key=j;
            j++;
        }
        int x=arr[i];
        arr[i]=arr[key];
        arr[key]=x;
    }
}
void selectionsortrecursive(int *arr,int size,int i,int j,int key){
    if(i==size){
        return;
    }
    else{
        if(j==size){
            int x=arr[i];
            arr[i]=arr[key];
            arr[key]=x;
            i++;
            key=i;
            j=i+1;
        }
        else{
            if(arr[j]<arr[key]){
                key=j;
            }
            j++;
        }
        return selectionsortrecursive(arr,size,i,j,key);
    }
}
