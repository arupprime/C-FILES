#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

int main(){
    int i = 19;
    float f = 2.0;
    char c = 's';
    void *in = &i;
    void *fl = &f;
    void *ch = &c;

    printf("%d\n",*(int *)in);
    printf("%f\n",*(float *)fl);
    printf("%c\n",*(char *)ch);

    return 0;
}
