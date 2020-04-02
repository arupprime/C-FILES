#include <stdio.h>

int f(int n){
    if(n>100){
        return n-11;
    }
    else{
        return f(f(n+12));
    }
}

int main(){

    printf("%d ",f(96));

    return 0;
}
