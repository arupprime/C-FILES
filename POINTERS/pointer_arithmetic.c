#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/*int arraySum(int array[],const int n){
    int sum = 0, *ptr;
    int *const arrayEnd = &array[n];

    for(ptr=array; ptr<arrayEnd; ++ptr){
        sum += *ptr;
    }
    return sum;
}*/


int main(){
    int numbers[6]= {1,2,3,4,5,6};
    int *ptr = numbers;
    printf("%d = %d\n",numbers[2],*(numbers+2));
    printf("%p = %p",&numbers[2],(numbers+2));

    //printf("%d",arraySum(numbers,6));

    return 0;
}
