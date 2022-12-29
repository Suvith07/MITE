//Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene

#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("Enter Three Sides of Triangle\n");
    scanf("%d %d %d",&side1,&side2,&side3);
    if(side1==side2 && side2==side3)
    printf("This is an Equilateral Triangle");
    else if (side1==side2 || side2==side3 || side1==side3)
    printf("This is an Isosceles Triangle");
    else
    printf("This is a Scelene Triangle");
    return 0;
}