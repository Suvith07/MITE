/*An automobile company manufactures both a two wheeler (TW) and a four wheeler (FW). 
A company manager wants to make the production of both types of vehicle according to the given data below:
1st data, Total number of vehicle (two-wheeler + four-wheeler)=v
2nd data, Total number of wheels = W
The task is to find how many two-wheelers as well as four-wheelers need to manufacture as per the given data
*/

#include<stdio.h>
int main()
{
    int vehicleNumber,wheelNumber,twoWheeler,fourWheeler,matchFound=1;
    printf("Enter Number of Vehicle ");
    scanf("%d",&vehicleNumber);
    printf("\nEnter Number of Wheels ");
    scanf("%d",&wheelNumber);
    if(wheelNumber>=2 && wheelNumber%2==0 && wheelNumber>vehicleNumber)
    {
        for(twoWheeler=0;twoWheeler<=vehicleNumber;twoWheeler++)
        {
            for(fourWheeler=0;fourWheeler<=vehicleNumber;fourWheeler++)
            {
                if(((twoWheeler*2 + fourWheeler*4)==wheelNumber) && ((twoWheeler + fourWheeler) == vehicleNumber))
                {
                    printf("\nTW = %d FW = %d\n",twoWheeler,fourWheeler);
                    matchFound=0;
                }
            }
        }
        if(matchFound)
        printf("Invalid Input");
    }
    else
    printf("Invalid Input");
}