#include <stdio.h>
#include <stdlib.h>

int main(){
    struct intPtrs {
        int *p1;
        int *p2;
    };

    struct intPtrs pointers;

    int i1=110, i2;

    pointers.p1 = &i1;
    pointers.p2 = &i2;

    *pointers.p2 = -95;

    printf("pointers.p1 = %p, *pointer.p1 = %d.\n",pointers.p1,*pointers.p1);
    printf("pointers.p2 = %p, *pointer.p2 = %d.",pointers.p2,*pointers.p2);

    return 0;
}
