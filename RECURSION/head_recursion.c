#include <stdio.h>

void fun1(int n){
    if(n>0){
        fun1(n/2);       // in head recursion statements will be executed in retunrning phase, not in calling phase.
        printf("%d ",n);
    }
}

int main(){

    fun1(16);
    return 0;
}
