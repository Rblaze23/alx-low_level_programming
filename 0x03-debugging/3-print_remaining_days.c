void print_remaining_days(int month, int day, int year)
{
    int is_leap_year = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);

    if (month < 1 || month > 12 || day < 1 || day > 31)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
    }
    else if (month == 2 && day > 29)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
    }
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
    }
    else
    {
        int days_in_month[] = {31, 28 + is_leap_year, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int total_days = 0;

        for (int i = 0; i < month - 1; i++)
        {
            total_days += days_in_month[i];
        }

        total_days += day;

        printf("Day of the year: %d\n", total_days);

        if (is_leap_year && month > 2)
        {
            total_days++;
        }

        printf("Remaining days: %d\n", 365 + is_leap_year - total_days);
    }
}
