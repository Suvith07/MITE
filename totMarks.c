/*Write a C program to read temperature in centigrade and display a suitable message according to temperature state below :

Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
*/

#include<stdio.h>
int main()
{
    int rollNo=0,marksPhysics=0,marksChemistry=0,marksCA=0;
    char name[20];
    printf("\nInput the Roll Number of the student : ");
    scanf("%d",&rollNo);
    printf("\nInput the Name of the Student : ");
    scanf("%s",name);
    printf("\nInput the marks of Physics, Chemistry and Computer Application : ");
    scanf("%d %d %d",&marksPhysics,&marksChemistry,&marksCA);
    printf("\nName of Student : %s",name);
    printf("\nMarks in Physics : %d",marksPhysics);
    printf("\nMarks in Chemistry : %d",marksChemistry);
    printf("\nMarks in Computer Application : %d",marksCA);
    int sum = marksPhysics+marksChemistry+marksCA;
    printf("\nTotal Marks = %d",sum);
    float per = (float)sum/300*100;
    printf("\nPercentage = %.2f",per);
    printf("\nDivision = ");
    (per>=70)?printf("First"):printf("Second");
    return 0;
}
