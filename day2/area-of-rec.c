/*Q3 (User Inputs, Operations & Output)
Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/
#include <stdio.h>
int main()
{
    int length=0,breadth=0,area=0,perimeter=0; //declaring 
    scanf("%d%d",&length,&breadth);  //taking input
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("area of rectangle is =%d\n",area);
    printf("perimeter of rectangle is =%d\n",perimeter);
    return 0;
}