#include <stdio.h>

int main(){
    int arr_values[10] = {1,2,4,5,6,7,10,8,9,3};
    int i, j;

    for( i=0; i<10; i++){
        for( j=1; j<10; j++){
                if(arr_values[i]>arr_values[j]){
                        printf("%d ",arr_values[i]);
                        break;
                }
        }
    }

   // printf("%d ",);

    return 0;
}
