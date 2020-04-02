#include <stdio.h>

void main(){
    //int matrix[3][3] = { [0][0]=1, [1][1]= 1, [2][2]= 1};

    int matrix[3][3] = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
    };

    int i, j;

    printf("%d\n",matrix[1][1]);     // will display 5, because index starts from matrix[0][0]

    for( i=0; i<=2; i++) {               // ***process for taking Input for the sequential positions in the matrice
        for( j=0; j<=2; j++){
            printf("enter element[%d][%d] : ",i+1,j+1);   // for better understanding of the element position
            scanf("%d",&matrix[i][j]);
            if(j==2){
                printf("\n");
            }
        }
    }

    for( i=0; i<=2; i++) {               // ***process for displaying an matice in the original shape
        for( j=0; j<=2; j++){
            printf("%d  ",matrix[i][j]);
            if(j==2){
                printf("\n");
            }
        }
    }

    return;
}
