#include<stdio.h>
int linearsearchiterative(int *,int,int);
int linearsearchrecursive(int *,int,int,int);
int main()
{
    printf("1)Iterative Linear Search\n");
    printf("2)Recursive Linear Search\n");
    printf("Enter your choice:");
    int choice,index;
    scanf("%d",&choice);
    if(choice<1&&choice>2)
    {
        printf("Invalid Choice");
    }
    else
    {
        printf("Enter the no of elements required:");
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            printf("Enter the element of the array:");
            scanf("%d",&arr[i]);
        }
        printf("Enter the element to search for:");
        int element;
        scanf("%d",&element);
        switch(choice)
        {
            case 1:
                index=linearsearchiterative(arr,element,n);
                if(index==-1)
                {
                    printf("Element not found");
                }
                else
                {
                    printf("Element found at index %d",index);
                }
                break;
            case 2:
                index=linearsearchrecursive(arr,element,n,0);
                if(index==-1)
                {
                    printf("Element not found");
                }
                else
                {
                    printf("Element found at index %d",index);
                }
                break;            
        }
    }
}
int linearsearchiterative(int *arr,int element,int size)
{
    int index=-1;
    for(int i=0;i<size;i++)
    {
        if(element==arr[i])
        {
            return i;
        }
    }
    return index;
}
int linearsearchrecursive(int *arr,int element,int size,int start)
{
    if(start==size)
    {
        return -1;
    }
    else
    {
        if(arr[start]==element)
        {
            return start;
        }
        else
        {
            start++;
            return linearsearchrecursive(arr,element,size,start);
        }
    }
}
