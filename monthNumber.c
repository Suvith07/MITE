/*Write a program in C to read any Month Number in 
integer and display the number of days for this month*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int monthWith31days[]={1,3,5,7,8,10,12};
    int monthWith30days[]={4,6,9,11};
    int month,i;
    scanf("%d",&month);
    if(month<1 || month >12)
    printf("Invalid");
    else{
        if(month==2)
            printf("Month Has 28 Days");
        else{
            for(i=0;i<sizeof(monthWith31days)/4;i++){
                if(monthWith31days[i]==month){
                    printf("Month Has 31 Days");
                    exit(0);
                }
            }
             for(i=0;i<sizeof(monthWith30days)/4;i++){
                if(monthWith30days[i]==month){
                    printf("Month Has 30 Days");
                    exit(0);
                }
            }
        }
    }
}