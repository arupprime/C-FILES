#include <stdio.h>

int main(){
    int i;
    int arr[10];
    float sum = 0;
    float average = 0.0;

    printf("\n enter the 10 grades:");


    for( i=0; i<=5; i++){
        printf("\n enter %d no. grade.",i);
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    average = (float)sum/10;

    printf("average: %.2f",average);

    return 0;
}
