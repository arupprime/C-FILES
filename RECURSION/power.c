#include <stdio.h>

int pow(int m,int n){
    if(n==0){
        return 1;
    }
    else if(n%2==0){
        return pow(m*m,n/2);
    }
    else{
        return pow(m*m,(n-1)/2)*m;
    }
}

/*
int pow(int m,int n){
    if(n==0){
        return 1;
    }
    else{
        return pow(m,n-1)*m;
    }
}*/


int main(){

    printf("%d ",pow(2,6));

    return 0;
}
