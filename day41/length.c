/*Q81 (Strings)
Count characters in a string without using built-in length functions.*/

Count characters in a string without using built-in length functions.*/
#include <stdio.h>
int main()
{
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    while ((str[count] = getchar()) != '\n' && count < 99)
        count++;    
    str[count] = '\0'; // Null-terminate the string
    printf("Length of the string: %d\n", count);
    return 0;
}