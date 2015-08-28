#include<stdio.h>
main()
{
    int a,b;
    printf("\nEnter the first number: ");
    scanf("%d",&a);
    printf("\nEnter the second number: ");
    scanf("%d",&b);
    if(a<b)
    printf("Up");
    else if(a>b)
    printf("Down");
    else
    printf("Equal");
    return 0;
}
