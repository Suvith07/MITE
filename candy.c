#include<stdio.h>
int main()
{
    int candyMax=10;
    int candySold;
    scanf("%d",&candySold);
    if(candySold>10 || candySold<=0)
    printf("Invalid Input\n");
    else
    printf("Number of Candies Sold : %d\n",candySold);
    if(candyMax-candySold<=5)
    printf("Number of Candies Available : %d",candyMax);
    else
    printf("Number of Candies Available : %d",candyMax-candySold);
    
}