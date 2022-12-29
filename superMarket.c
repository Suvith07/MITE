/*A supermarket maintains a pricing format for all its products.
A value N is printed on each product. 
When the scanner reads the value N on the item, 
the product of all the digits in the value N is the price of the item. 
The task here is to design the software such that 
given the code of any item N the product (multiplication) of all the digits of value should be computed(price)*/


#include<stdio.h>
int main()
{
    int n,price=1,digit;
    printf("Enter the value N\n");
    scanf("%d",&n);
    while(n!=0)
    {
        digit=n%10;
        price=price*digit;
        n/=10;
    }
    printf("%d",price);
}