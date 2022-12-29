#include<stdio.h>
int starting(int p)
{
    int value=0;
    for(int i=p;i>0;i--)
    value=value+i;
    return value;
}
int main()
{
    int n,i,j,k,value=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",value++);
            if(j!=i)
            printf("*");
        }
        printf("\n");
    }
    for(i=n;i>=1;i--)
    {   
        value = starting(i-1);
        for(j=1;j<=i;j++)
        {
            printf("%d",++value);
            if(j!=i)
            printf("*");
        }
        printf("\n");
    }
}