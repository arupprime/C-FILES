#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

int main()
{
    char *str = NULL;
    str = (char*)malloc(20*sizeof(char));

    strcpy(str,"arup");
    printf("string: %s , address: %p \n",str,str);

    str = (char*)realloc(str,15*sizeof(char));

    strcat(str,"pradhan");
    printf("string: %s , address: %p \n",str,str);

    free(str);
    str = NULL;
    printf("string: %s , address: %p \n",str,str);

    char *pstr = (char*)calloc(30,sizeof(char));
    printf("%p\n",pstr);

    return 0;
}
