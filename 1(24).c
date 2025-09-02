#include<stdio.h>
void main()

{
    int a,b,c;
    printf("Enter Two Number:");
    scanf("%d %d", &a,&b);

    c=a;
    a=b;
    b=c;

    printf("After Swapping:%d %d\n", a,b);

}
