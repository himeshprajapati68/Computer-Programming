#include<stdio.h>
void main()

{
    float I,P,R,T;
    printf("Enter Principal:");
    scanf("%f", &P);
    printf("Enter Rate:");
    scanf("%f", &R);
    printf("Enter Time:");
    scanf("%f", &T);

    I=P*R*T/100;
    printf("Interest:%f\n", I);


}
