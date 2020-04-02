#include<stdio.h>
#include<string.h>
//#include<conio.h>

int main(){
    struct date {
        int day;
        int month;
        int year;
    };

    struct date today = {10,6,2019};

    struct date dob;
    dob = (struct date){6,1,1999};
    printf("%d , %d , %d ,\n",dob.day,dob.month,dob.year);
    /*today.day = 10;
    today.month = 6;
    today.year = 2019;*/

    struct date days[4] = {[2]={1,2,3}, [0]={3,4,5}, [1]={6,7,8}};

    printf("%d , %d , %d ,\n",days[0].day,days[0].month,days[0].year);
    printf("%d , %d , %d ,\n",days[1].day,days[1].month,days[1].year);
    printf("%d , %d , %d ,\n",days[2].day,days[2].month,days[2].year);

    printf("%d , %d , %d ,\n",today.day,today.month,today.year);

    struct date date1 = {.month = 12, .year = 10, .day = 31};
    printf("%d , %d , %d ,\n",date1.day,date1.month,date1.year);


    struct month {
        int numberofdays;
        char name[3];
    };

    struct month aMonth;

    aMonth.numberofdays = 31;
    aMonth.name[3] = "Jan";

    printf("month: %s, days: %d\n",aMonth.name,aMonth.numberofdays);

    return 0;
}
