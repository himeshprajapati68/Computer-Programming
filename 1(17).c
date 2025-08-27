#include<stdio.h>
void main()

{
    float area, perimeter,length;
    printf("Enter Length:");
    scanf("%f", &length);

    area=length*length;
    perimeter=length*4;

    printf("Area: %f\n", area);
    printf("Perimeter: %f\n", perimeter);


}
