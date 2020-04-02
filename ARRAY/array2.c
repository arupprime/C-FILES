#include <stdio.h>

int main(){
   // int arr[6]={[2]=2, [5]=2};
    int arr_val[6];
    int i;

    printf("enter array elements:");
    for(i=0; i<=5; i++){
        printf("\nelement no %d : ",i);
        scanf("%d",&arr_val[i]);
    }

    for(i=0; i<=5; i++){
        arr_val[i] = arr_val[i]*arr_val[i];
    }
    printf("\nAfter squaring array values are: ");

    for(i=0; i<=5; i++){
        printf(" %d ",arr_val[i]);
    }

    return 0;
}
