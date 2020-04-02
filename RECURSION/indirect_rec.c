#include <stdio.h>
                     // when more than one function calling each other in a circular manner, that's indirect recursion
void fa(int n){
    if(n>0){
        printf("%d ",n);
        fb(n-1);
    }
}

void fb(int n){
    if(n>0){
        printf("%d ",n);
        fa(n/2);
    }
}

int main(){

    fa(25);
    return 0;
}
