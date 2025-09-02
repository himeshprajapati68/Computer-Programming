#include<stdio.h>
void main()

{
    float netsales,grosssales;
    printf("Enter Gross Salary:");
    scanf("%f", &grosssales);

    netsales=grosssales- grosssales*0.10;
    printf("Net Sales:%f\n", netsales);

}
