/*---Ques1)   Develop a recursive function GCD (num1, num2) that accepts two integer
arguments. Write a C program that invokes this function to find the greatest
common divisor of two given integers*/

#include <stdio.h>

int GCD(int num1, int num2) {
    if (num2 == 0)
        return num1;
    return GCD(num2, num1 % num2);
}

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int gcd = GCD(a, b);
    printf("The GCD of %d and %d is %d\n", a, b, gcd);

    return 0;
}


/*--Ques2)   Develop a recursive function FIBO (num) that accepts an integer argument.
Write a C program that invokes this function to generate the Fibonacci
sequence up to num*/

#include <stdio.h>

int FIBO(int num) {
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return FIBO(num - 1) + FIBO(num - 2);
}

int main() {
    int n;

    printf("Enter the number of terms to generate in Fibonacci sequence: ");
    scanf("%d", &n);

    printf("Fibonacci sequence up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", FIBO(i));
    }
    printf("\n");

    return 0;
}


/*--Ques3)  Develop a C function ISPRIME (num) that accepts an integer argument and
returns 1 if the argument is prime, a 0 otherwise. Write a C program that
invokes this function to generate prime numbers between the given ranges. */

#include <stdio.h>

int ISPRIME(int num) {
    if (num < 2)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int start, end;

    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (ISPRIME(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

/*--Ques4)  Develop a function REVERSE (str) that accepts a string argument. Write a C
program that invokes this function to find the reverse of a given string.*/

#include <stdio.h>
#include <string.h>

// Function to reverse a string in-place
void REVERSE(char str[]) {
    int length = strlen(str);
    int start = 0, end = length - 1;
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    REVERSE(str);
    printf("Reversed string: %s\n", str);

    return 0;
}


