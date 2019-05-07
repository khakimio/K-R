#include<stdio.h>

static char daytab[2][13]={
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};

int day_of_year(int year,int month,int day);
void month_day(int year,int yearday,int *pmonth,int *pday);


int main() {
    
    int pday, pmonth;
    printf("day of year %d\n", day_of_year(2017, 12, 11));
    
    month_day(2017, 345, &pmonth, &pday);
    printf("month day %d, %d\n", pmonth, pday);
    
    
    return 0;
}

int day_of_year (int year, int month, int day) {

    int leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    
    char *p = &daytab[leap][0];
    
    for (int i = 0; i < month; i++) {
        day += *p;
        ++p;
    }
    
    return day;
}




void month_day(int year, int yearday, int *pmonth, int *pday) {
    
    int i;
    int leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    
    char *p = &daytab[leap][0];
    
    for (i = 0; yearday > *p; i++) {
        yearday -= *p;         ++p;
    }
    *pmonth = i;
    *pday = yearday;
    
}

