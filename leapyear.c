#include <stdio.h>

void print_remaining_days(int month, int day, int year);

int convert_day(int month, int day);

int main()
{
    int month;
    int day;
    int year;
    int day_converted;

    day = 29;
    month = 02;
    year = 2000;

    day_converted = convert_day(month,day);

    print_remaining_days(month, day_converted, year);

    return (0);
}

int convert_day(int month, int day)
{
    switch (month)
    {
        case 2:
            day = 31 + day;
            printf("%d", day);
            break;
        case 3:
            day = 59 + day;
            printf("%d", day);
            break;
        case 4:
            day = 90 + day;
            printf("%d", day);
            break;
        case 5:
            day = 120 + day;
            printf("%d", day);
            break;
        case 6:
            day = 151 + day;
            printf("%d", day);
            break;
        case 7:
            day = 181 + day;
            printf("%d", day);
            break;
        case 8:
            day = 212 + day;
            printf("%d", day);
            break;
        case 9:
            day = 243 + day;
            printf("%d", day);
            break;
        case 10:
            day = 273 + day;
            printf("%d", day);
            break;
        case 11:
            day = 304 + day;
            printf("%d", day);
            break;
        case 12:
            day = 334 + day;
            printf("%d", day);
            break;
        default:

            break;
    }
    return (day);
}

void print_remaining_days(int month, int day, int year)
{
    int feb;

    if ((year % 4 == 0) || (year % 400 == 0 && !(year % 100 == 0)))
    {
        if (month == 2 && month <= 29)
        {
            feb = day;
        }

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - feb);
    }
    else
    {
        if (month == 2 && day == 60)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}
