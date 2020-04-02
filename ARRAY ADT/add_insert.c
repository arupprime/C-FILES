#include <stdio.h>
#include <stdlib.h>

struct Array {
    int A[10];      // For ceating in Heap, int *A has to be taken
    int size;
    int length;
};

void Display(struct Array arr){
    int i;
    printf("Elements are:  \n");
    for(i=0; i<arr.length; i++){
        printf("%d  ",arr.A[i]);
    }
}

void Append(struct Array *arr, int x){
        if(arr->size > arr->length){
                arr->A[arr->length++] = x;// x is appended at the end and the length is increased at the same time
        }
}

void Insert(struct Array *arr, int index, int x){
        int i;
        if(index>=0 && index<=arr->length){
                for(i=arr->length; i>index; i--){
                        arr->A[i] = arr->A[i-1];
                }
                arr->A[index] = x;
                arr->length++;
        }
}

int main()
{
    struct Array arr_v = {{2,4,6,8,10},10,5};

//    int n,i;
//
//    printf("Enter size of the array:");
//    scanf("%d",&arr.size);
//
//    arr.A = (int *)malloc(arr.size*sizeof(int));
//    arr.length = 0;
//
//    printf("Enter the number of Numbers:");
//    scanf("%d",&n);
//
//    printf("Enter all the elements:  \n");
//    for(i=0; i<n; i++){
//            scanf("%d",&arr.A[i]);
//    }
//
//    arr.length = n;


//    Append(&arr_v,10);

    Insert(&arr_v,3,17);

    Display(arr_v);

    return 0;
}
