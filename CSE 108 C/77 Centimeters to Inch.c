#include<stdio.h>

main()
{
    float c,a,i,p;
    printf("Enter the value in centimeters: ");
    scanf("%f",&c);
    a=c/2.54;
    i=(int)a/12;
    p=a-(12*i);
    printf("\n%.2f centimeters is %.0f feet %.2f inchies",c,i,p);
    return 0;
}
