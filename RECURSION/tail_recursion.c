#include <stdio.h>

void fun1(int n){
    if(n>0){
        printf("%d ",n);
        fun1(n-1);     // fun1(n-1) + n will not be tail recursion because '+ n' will be executed in returning phase
    }                  // in tail recursion nothing is executed in returning phase (strictly)
}


int main(){

    fun1(4);
    return 0;
}
