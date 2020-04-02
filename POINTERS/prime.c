#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

_Bool prime(int n){

for(int i=2; i<=(n-1); i++)
    {
        if(n%i==0){
            return false;

        }
        else{
            return true;
        }

    }
}


int main()
{
    int a;
    printf("enter no:");
    scanf("%d",&a);

    //_Bool result = prime(a);

    prime(a)?printf("prime no."):printf("composite no.");

    return 0;
}

