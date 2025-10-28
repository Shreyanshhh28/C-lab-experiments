//4.	Write a c program to add two numbers take input from the user
#include <stdio.h>
int main() {
    int num1, num2, sum;

    // Prompt the user for two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Print the result
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    return 0;
}
