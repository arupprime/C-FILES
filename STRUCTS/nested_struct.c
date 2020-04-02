#include <stdio.h>


int main(){
    struct date {
        int day;
        int month;
        int year;
    };
    struct time {
        int hour;
        int minute;
        int second;
    };
    struct dateAndtime {
        struct date sdate;
        struct time stime;
    };

    //struct dateAndtime event = {{6,1,1999},{5,20,00}};
    struct dateAndtime event = {{.day=6,.month=1,.year=1999},{.hour=5,.minute=20,.second=00}};

/*  event.sdate.day=6;
    event.sdate.month = 1;
    event.sdate.year = 1999; */

    struct dateAndtime events[30];

    events[0].stime.hour = 4;

    struct Time {

        struct Date {
            int day;
            int month;
            int year;
        }dob;

        //struct Date dob;

        int hour;
        int minute;
        int seconds;
    };






    return 0;
}
