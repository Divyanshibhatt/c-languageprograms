/*Q40 (Loops without Arrays/Strings)
Write a program to find the 1’s complement of a binary number and print it*/
#include<stdio.h>
int main()
{
    int n,digit,complement=0,place=1;
    printf("enter the binary number:");
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;
        if(digit==0)
        {
            complement=complement+1*place;
        }
        n=n/10;
        place=place*10;
    }
    printf("the 1's complement of a binary number is:%d\n",complement);
    return 0;
}