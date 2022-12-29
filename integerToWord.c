//Write a program in C to read any digit, display in the word

#include <stdio.h>
#include <string.h>
int main()
{
    char number[15];
    printf("Enter number ");
    scanf("%s", number);
    int n=strlen(number);
    for(int i=0;i<n;i++)
    {
        switch(number[i])
        {
            case '0': printf("Zero "); break;
            case '1': printf("One "); break;
            case '2': printf("Two "); break;
            case '3': printf("Three "); break;
            case '4': printf("Four "); break;
            case '5': printf("Five "); break;
            case '6': printf("Six "); break;
            case '7': printf("Seven "); break;
            case '8': printf("Eight "); break;
            case '9': printf("Nine "); break;
            default :printf("Invalid "); break;
        } 
    }
    return 0;
}