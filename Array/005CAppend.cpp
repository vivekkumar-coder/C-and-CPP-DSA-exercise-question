#include<stdio.h>
#include<stdlib.h>

struct Array 
{
    int *A;
    int size;
    int length;
};

void display(struct Array arr)
{
    int i;
    for(int i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
}

void Append(struct Array *arr,int x)
{
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
        arr->length++;
    }
}

int main()
{
    struct Array arr;

    printf("Enter the size of array : ");
    scanf("%d",&arr.size);

    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;

    int n,i;
    
    printf("How many element you want to enter : ");
    scanf("%d",&n);
    
    arr.length=n;
    
    printf("Enter the elemnet of array \n");

    for(i=0;i<n;i++)
        scanf("%d",&arr.A[i]);




    
    Append(&arr,10);
    display(arr);

    free (arr.A);

    return 0;

}