#include <stdio.h>

int main(){
    int matric[2][3][4] = {
            {       {2,3,4,4},
                    {4,5,6,7},
                    {1,4,8,5}       },
            {       {1,1,1,1},
                    {1,1,1,1},
                    {1,1,1,1}       },
    };
    int i, j, k;
    int sum = 0;

    for(i=0; i<=1; i++){
            for(j=0; j<=2; j++){
                    for(k=0; k<=3; k++){
                            printf("%d  ",matric[i][j][k]);
                            sum += matric[i][j][k];
                            if(k==3){
                                printf("\n");

                            }
                    }
            }
    }
    printf("\n %d",sum);

    return 0;
}
