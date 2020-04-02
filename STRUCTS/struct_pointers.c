#include <stdio.h>
#include <stdlib.h>

int main(){
    struct date {
        int day;
        int month;
        int year;
    };

    struct date today = {4,5,2020};

    struct date *datePtr = &today;

    printf("today's date is %d/%d/%d.",(*datePtr).day, datePtr->month, datePtr->year%100);

    return 0;
}
