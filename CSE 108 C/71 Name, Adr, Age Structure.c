#include<stdio.h>

struct dir
            {
            char name[20];
            char adr[100];
            int age;
            } me;

main()
{
    printf("\nEnter your name: ");
    gets(me.name);
    printf("\nEnter your address: ");
    gets(me.adr);
    printf("\nEnter your age: ");
    scanf("%d",&me.age);
    return 0;
}
