//4.	According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year.
#include <stdio.h>
int main() {
    int year, dayCode, leapYears, totalDays;

    // Prompt the user for a year
    printf("Enter a year (e.g., 2023): ");
    scanf("%d", &year);

    // Calculate the number of leap years from 1 to the given year
    leapYears = (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;

    // Total days from 01/01/0001 to 01/01/year
    totalDays = (year - 1) * 365 + leapYears;

    // Day code calculation (0=Sunday, 1=Monday, ..., 6=Saturday)
    dayCode = totalDays % 7;

    // Print the day of the week
    switch (dayCode) {
        case 0:
            printf("01/01/%d is a Sunday.\n", year);
            break;
        case 1:
            printf("01/01/%d is a Monday.\n", year);
            break;
        case 2:
            printf("01/01/%d is a Tuesday.\n", year);
            break;
        case 3:
            printf("01/01/%d is a Wednesday.\n", year);
            break;
        case 4:
            printf("01/01/%d is a Thursday.\n", year);
            break;
        case 5:
            printf("01/01/%d is a Friday.\n", year);
            break;
        case 6:
            printf("01/01/%d is a Saturday.\n", year);
            break;
        default:
            printf("Error in calculating the day.\n");
    }

    return 0;
}