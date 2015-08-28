#include<stdio.h>

main()
{
    unsigned int s,h,m,l;
    printf("How many seconds?: ");
    scanf("%d",&s);
    h=s/3600;
    m=(s%3600)/60;
    l=s-(60*m)-(3600*h);
    printf("%d seconds is equivalent to %d hours %d minutes %d seconds",s,h,m,l);
    return 0;
}
