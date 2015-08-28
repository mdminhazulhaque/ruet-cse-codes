#include<stdio.h>
main()
{
    int i,min=32767,max=-32768,n;
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++)
        {
            scanf("%d",&n);
            if(n>max)
            max=n;
            if(n<min)
            min=n;
        }
    printf("\nMax is %d and Min is %d",max,min);
    return 0;
}
