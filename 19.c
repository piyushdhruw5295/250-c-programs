#include <stdio.h>
int isLeapYear(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) 
    {
        return 1;
    }
    return 0;
}
int isValid(int date, int month, int year) {
    int month_days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year)) 
    {
        month_days[2] = 29;
    }
    if (month < 1 || month > 12) 
    {
        return 0;
    }
    if (date < 1 || date > month_days[month]) 
    {
        return 0;
    }
    if (year < 0) {
        return 0;
    }
    return 1;
}
int main() {
    int date, month, year;
    printf("Enter the date: \n");
    scanf("%d", &date);
    printf("Enter the month: \n");
    scanf("%d", &month);
    printf("Enter the year: \n");
    scanf("%d", &year);
    if (isValid(date, month, year) == 1) 
    {
        printf("\nThe date is correct.\n");
        printf("%d/%d/%d", date, month, year);
    } else {
        printf("\nThe date is incorrect.\n");
    }
  return 0;
}