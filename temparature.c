//Write a C program to read roll no, name and marks of three subjects and calculate the total, percentage and division

#include<stdio.h>
int main()
{
    int temp;
    printf("Enter Temperature in celsius\n");
    scanf("%d",&temp);
    (temp<0)?printf("Freezing Weather"):(temp<10)?printf("Very Cold Weather"):
    (temp<20)?printf("Cold Weather"):(temp<30)?printf("Normal in Temperature"):
    (temp<40)?printf("Its Hot"):printf("Its Very Hot");
    return 0;
}
