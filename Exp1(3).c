//3.	Write a program that prompts the user to enter their name and age.
#include <stdio.h>
int main() 
{
    char name;
    int age;

    // Prompt the user for their name
    printf("Enter your name: ");
    scanf("%s", &name);

    // Prompt the user for their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Print the user's name and age
    printf("Hello, %sYou are %d years old.\n", name, age);
    return 0;
}
