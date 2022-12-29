/*you are given a number, and you have to extract the key by finding the 
difference between the sum of the even and odd numbers of the input*/

#include<stdio.h>
int main()
{
    int number,odd=0,even=0,digit;
    printf("Enter the Number\n");
    scanf("%d",&number);
    while(number!=0)
    {
        digit = number%10;
        if(digit&1)
        odd=odd+digit;
        else
        even=even+digit;
        number/=10;
    }
    printf("%d",abs(even-odd));

}   