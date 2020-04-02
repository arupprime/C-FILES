#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char muliple[]="arup pradhan";
    char *pchar = muliple;

    //for(int i=0; i<strlen(muliple); i++)
    int i=0;
    while(i<strlen(muliple))
    {
        printf("letter: %c, address: %p\n",muliple[i],pchar);
        ++i;
        ++pchar;
    }
    return 0;

}
