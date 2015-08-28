#include<stdio.h>

main()
{
    int s,s1,s2,t,t1,t2,e,e1=0,e2;
    printf("\nEnter the time in international format: ");
    time_s:
    scanf("%d",&s);
    s2=s%100; s1=(s-s2)/100;
    if(s2<60&&s1<24&&s<2360)
    {

        printf("\tValid time");
    }
    else
    {
        printf("\nInvalid time! Enter the correct time: ");
        goto time_s;
    }
    printf("\nEnter the time to add: ");
    time_a:
    scanf("%d",&t);
    t2=t%100; t1=(t-t2)/100;
    if(t2<60&&t1<24&&s<2360)
    {
        printf("\tValid time");
    }
    else
    {
        printf("\nInvalid time! Enter the correct time: ");
        goto time_a;
    }
    e2=s2+t2;
    if(e2>59)
    {
        ++e1;
        e2=e2-60;
    }
    e1=e1+s1+t1;
    if(e1>23&&e1>0)
    e1=e1-24;
    e=(e1*100)+e2;
    printf("\n\n******** Final time is %4d ********",e);
    return 0;
}
