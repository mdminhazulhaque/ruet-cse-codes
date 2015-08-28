#include<stdio.h>

main()
{
    int r;
    printf("Enter the radious: ");
    tree:
    scanf("%d",&r);
    if(r>-1)
    printf("\nThe area of the circle of radious %d units is %0.2f units",r,3.1416*r*r);
    else
        {
        printf("\nYou entered an negative value. Please enter a positive value: ");
        goto tree;
        }
    return 0;
}
