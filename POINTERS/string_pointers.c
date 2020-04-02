#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/*void stringcopy(char to[], char from[]){

    int i=0;
    while(from[i]!='\0'){
        to[i] = from[i];
        ++i;
    }
    to[i]="\0";
    return;
}*/


void stringcopy(char *to, char *from){
    while(*from!='\0'){
        *to++ = *from++;
    }
    *to ='\0';
    return;
}

int main(){

    char str1[30];
    char str2[]="arup pradhan";

    stringcopy(str1,str2);

    printf("%s\n",str1);

    return 0;
}
