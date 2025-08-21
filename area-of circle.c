/*Q4 (User Inputs, Operations & Output)
Write a program to calculate the area and circumference of a circle given its radius.*/
#include<stdio.h>
int main()
{
    float area=0,circumference=0,radius=0,pi=3.14; //area=3.14*(radius**2),circumference=2*3.14*radius
    scanf("%d",&radius);  //input
    area=pi*(radius*radius);
    circumference=2*pi*radius;
    printf("area of circle is=%d\n",area);
        printf("circumference of circle is =%d\n",circumference);
        return 0;
}