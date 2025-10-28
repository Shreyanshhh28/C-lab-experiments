//1.	WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered.
#include <stdio.h>
int main() {
    int number, positiveCount = 0, negativeCount = 0, zeroCount = 0;
    char choice;

    do {
        // Prompt the user for a number
        printf("Enter a number: ");
        scanf("%d", &number);

        // Check if the number is positive, negative, or zero
        if (number > 0) {
            positiveCount++;
        } else if (number < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }

        // Ask the user if they want to continue
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); // Note the space before %c to consume any leftover newline character

    } while (choice == 'y' || choice == 'Y');

    // Print the counts
    printf("Count of Positive numbers: %d\n", positiveCount);
    printf("Count of Negative numbers: %d\n", negativeCount);
    printf("Count of Zeroes: %d\n", zeroCount);

    return 0;
}