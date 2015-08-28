#include<stdio.h>
struct info {
             int roll;
             float cgpa;
             char *name;
             };
int main()
{
    int i,r,c;
    struct info id[10]={
                       {1, 3.75, "Shawon"},
                       {2, 4.00, "Maruf"},
                       {3, 8.75, "Sakhawat"},
                       {4, 4.00, "Sabbir"},
                       {5, 4.00, "Mostopha"},
                       {6, 8.00, "Asif"},
                       {7, 8.00, "Rafsun"},
                       {8, 0.00, "No name"},
                       {9, 4.00, "Zannat"},
                       {10, 4.00, "Kiron"}
                       };
    tree:
    printf("Enter your roll number: ");
    scanf("%d", &r);
    i=r-103001;
    if(r>103000&&r<103011)
    printf("\nRoll No # %d GPA # %.2f Name # %s\n", id[i].roll, id[i].cgpa, id[i].name);
    else
    {
    printf("\nInvalid roll number. Try again - ");
    goto tree;
    }
}
