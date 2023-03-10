#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
void age(int present_date, int present_month, int present_year, int birth_date, int birth_month, int birth_year)
{
    int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (birth_date > present_date)
    {
        present_date = present_date + month[birth_month - 1];
        present_month = present_month - 1;
    }
    if (birth_month > present_month)
    {
        present_year = present_year - 1;
        present_month = present_month + 12;
    }
    int final_date = present_date - birth_date;
    int final_month = present_month - birth_month;
    int final_year = present_year - birth_year;
    printf("\n\nPresent Age Years:%d Months:%d Days:%d\n", final_year, final_month, final_date);
}
int main()
{
    int present_date, present_month,present_year,birth_date,birth_month,birth_year;
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    printf("Present date is %d/%d/%d",stime.wDay,stime.wMonth,stime.wYear);

    present_date=stime.wDay;
    present_month=stime.wMonth;
    present_year=stime.wYear;

    printf("\nEnter the birth date (e.g. dd mm yyyy):");
    scanf("%d %d %d",&birth_date,&birth_month,&birth_year);

    age(present_date, present_month, present_year, birth_date, birth_month, birth_year);
    return 0;
}
