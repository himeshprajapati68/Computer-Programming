#include<stdio.h>
void main()

{
    int bytes,KB,MB,GB;
    printf("Enter bytes:");
    scanf("%d", &bytes);
    KB=bytes*1024;
    printf("KB:%d\n", KB);

    printf("Enter bytes:");
    scanf("%d", &bytes);
    MB=bytes*1024*1024;
    printf("MB:%d\n", MB);

    printf("Enter bytes:");
    scanf("%d", &bytes);
    GB=bytes*1024*1024*1024;
    printf("GB:%d\n", GB);





}
