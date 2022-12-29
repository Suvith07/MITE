//Write a program in C to read N numbers from keyboard and find their sum and average

#include<stdio.h>
int main()
{
    int n,i,a[20],sum=0;
    printf("Enter number of elements ");
    scanf("%d",&n);
    if(n<=0)
        printf("Invalid  N");
    else{
        printf("Enter the Numbers\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        float avg = (float)sum/n;
        printf("Sum : %d\n",sum);
        printf("Average : %.2f",avg);
    }    
    return 0;
}