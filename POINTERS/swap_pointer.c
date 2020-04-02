#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}

int main(){

    int a=10, b=20;
    printf("before swap a: %d, b: %d.\n",a,b);

    swap(&a,&b);
    printf("after swap a: %d, b: %d.\n",a,b);


    return 0;
}
