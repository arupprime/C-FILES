#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[5] = {2,3,6,7,9};
    int *p = NULL;
    int i;

    p = (int *)malloc(5*sizeof(int));
    p[0] = 4;
    p[1] = 5;
    p[2] = 2;
    p[3] = 7;
    p[4] = 2;

    for( i=0; i<5; i++)
        printf("%d ",A[i]);
    printf("\n");

    for( i=0; i<5; i++)
        printf("%d ",p[i]);



    return 0;
}
