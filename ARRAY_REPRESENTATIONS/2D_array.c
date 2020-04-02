#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[3][4] = {                // Array of integers, created in stack
                {1,2,3,4},
                {4,5,6,7},
                {7,8,9,10}
    };

    int *B[3];              // Array of pointer to integers, creates in stack

    B[0] = (int *)malloc(4*sizeof(4));    //Pointer B[0] pointing to block of 4 bytes(type int), in Heap
    B[1] = (int *)malloc(4*sizeof(4));
    B[2] = (int *)malloc(4*sizeof(4));

    int **C;                // Pointer to Pointer to Integer, in stack

    C = (int **)malloc(3*sizeof(int *));      // pointing to array of pointer to pointer to int, in Heap
    C[0] = (int *)malloc(4*sizeof(int));
    C[1] = (int *)malloc(4*sizeof(int));
    C[2] = (int *)malloc(4*sizeof(int));

    for(int i=0; i<3; i++){
            for(int j=0; j<4; j++){
                    printf("%d ",A[i][j]);      // change the name of arrays to see diff matrices
                    if(j==3){
                        printf("\n");
                    }
            }
    }


    return 0;
}
