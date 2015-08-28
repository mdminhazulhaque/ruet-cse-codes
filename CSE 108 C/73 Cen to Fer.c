#include<stdio.h>
main()
{
    int t,c;
    printf("Enter temperature in degree: ");
    scanf("%d",&t);
    printf("\n%d degree Celsius is converted to %d degree Fahrenheit",t,9*t/5+32);
    return 0;
}
