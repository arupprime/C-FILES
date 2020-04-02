#include <stdio.h>

int main(){
    int i;

    int *p = (int *)malloc(4*sizeof(int)); // create an array of 4 elements in Heap
    p[0] = 1;
    p[1] = 3;
    p[2] = 6;
    p[3] = 8;

    int *q = (int *)malloc(7*sizeof(int)); // create an array of 7 elements in Heap

    for( i=0; i<4; i++){
            q[i] = p[i];                 // copying elements from p[] to q[]
            printf("%d ",q[i]);
    }
    free(p);                          // releasing the block memory pointed by *p
    p = q;                         // p is now pointing to the block memory q pointed to
    q = NULL;                       // q is now pointing to NULL pointer
    free(q);

    printf("\n");

    for( i=0; i<7; i++){
            printf("%d ",p[i]);
    }

    return 0;
}
