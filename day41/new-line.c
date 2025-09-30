/*Q82 (Strings)
Print each character of a string on a new line.*/
#include <stdio.h>
int main()
{
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    while ((str[i] = getchar()) != '\n' && i < 99)
        i++;
    str[i] = '\0'; // Null-terminate the string
    printf("Characters in the string:\n");
    for (int j = 0; j < i; j++)
        printf("%c\n", str[j]);
    return 0;
}