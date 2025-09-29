
/*Q33 (Loops without Arrays/Strings)
Write a program to check if a number is an Armstrong number.*/
#include<stdio.h>
int main()
{
    int n, originalNumber, remainder, result = 0, digits = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalNumber = n;

    // Count the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++digits;
    }

    originalNumber = n;

    // Calculate the sum of the power of each digit
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, digits);
        originalNumber /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}