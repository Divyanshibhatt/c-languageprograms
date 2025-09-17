/*Q53 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/
#include <stdio.h>  
int main()  
{  
    int i, j, space;  
    int rows = 5; // Number of rows for the upper half of the pattern

    // Upper half of the pattern
    for(i = 1; i <= rows; i++)  
    {  
        // Print leading spaces
        for(space = 1; space <= (rows - i); space++)  
        {  
            printf(" ");  
        }  
        // Print stars
        for(j = 1; j <= (2 * i - 1); j++)  
        {  
            printf("*");  
        }  
        printf("\n");  
    }  

    // Lower half of the pattern
    for(i = rows - 1; i >= 1; i--)  
    {  
        // Print leading spaces
        for(space = 1; space <= (rows - i); space++)  
        {  
            printf(" ");  
        }  
        // Print stars
        for(j = 1; j <= (2 * i - 1); j++)  
        {  
            printf("*");  
        }  
        printf("\n");  
    }  

    return 0;  
}