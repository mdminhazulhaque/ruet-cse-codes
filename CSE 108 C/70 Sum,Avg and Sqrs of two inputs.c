#include<stdio.h>
main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("\nSum of the numbers is %d", a+b);
    printf("\nAverage of the numbers is %d", (a+b)/2);
    printf("\nSum of squares of the numbers is %d", a*a+b*b);
    return 0;
}
