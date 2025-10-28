//1.	WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.
#include <stdio.h>
int main() {
    float length, width, area, perimeter;

    // Prompt the user for length and width
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // Print the results
    printf("The area of the rectangle is: %.2f\n", area);
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);

    return 0;
}