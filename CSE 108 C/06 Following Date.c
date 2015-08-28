#include<stdio.h>

main()
{
    unsigned int d,m,y;
    re:
    printf("Enter the date: ");
    scanf("%d%d%d",&d,&m,&y);
    { //start verify

    if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&d<=31) //for months of 31 days
        {
            if(d==31){d=1;m++;}
            else d++;
        }
    else if((m==4||m==6||m==9||m==11)&&d<=30) // for months of 30 days
        {
            if(d==30){d=1;m++;}
            else d++;
        }
    else if(m==2&&(y%4==0)) //for leap year
        {
            if(d==29){d=1;m++;}
            else if(d<29) d++;
            else
            {
                puts("Error!");
                goto re;
            }
        }
    else if(m==2&&(y%4!=0)) //for normal feb mnths
        {
            if(d==28){d=1;m++;}
            else if(d<28) d++;
            else //date can be 30 or 31
            {
                puts("Error!");
                goto re;
            }
        }
    else
        {
        puts("Error!");
        goto re;
        }

    } //end of verify
    while(m==13)
        {
            m=1;y++; //if month is 13, increase year
        }
    printf("\nThe following date is %2d %2d %d",d,m,y);
    return 0;
}
