#include<stdio.h>
void reverseFunction(int x)
{
    int digit,ans=0;
    while(x!=0)
    {
        digit = x%10;
        ans=(ans * 10) + digit;
        x/=10;
    }
    printf("%d\n",ans);
}
int main()
{
    int i,n,number[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&number[i]);
    for(i=0;i<n;i++)
    reverseFunction(number[i]);
    return 0;
}