#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <math.h>

int main(){
	int arr[100];
	int positive=0, negative=0, zero=0;

	printf("enter numbers:");

	scanf("%d",arr);

	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); ++i){

            if(arr[i]>0){
                    positive+=1;
            }
            else if(arr[i]<0){
                    negative+=1;
            }
            else if(arr[i]=0){
                    zero+=1;
            }
	}

	printf("%d",positive);
	printf("%d",negative);
	printf("%d",zero);
	return 0;

}
