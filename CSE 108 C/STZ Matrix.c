#include<stdio.h>

int main(void)
{
    int acol,arow,bcol,brow,i,j,k,sum=0;
    printf("\nEnter the size of first matrix: ");
    scanf("%d %d",&arow,&acol);
    int mat_a[arow][acol]; //declare array for mat_a
    for(i=0;i<arow;i++)
    {
        for(j=0;j<acol;j++)
        {
            printf("Enter element (%d,%d): ",i+1,j+1);
            scanf("%d",&mat_a[i][j]);
        }
    }
    printf("\n\nThe matrix A is\n\n"); // Print mat A
        for(i=0;i<arow;i++)
        {
            printf("|");
            for(j=0;j<acol;j++)
            {
                printf("%5d",mat_a[i][j]);
            }
            printf("  |\n");
        }
    printf("\nEnter the size of second matrix: ");
    scanf("%d %d",&brow,&bcol);
    int mat_b[brow][bcol]; //declare array for mat_b
    for(i=0;i<brow;i++)
    {
        for(j=0;j<bcol;j++)
        {
            printf("Enter element (%d,%d): ",i+1,j+1);
            scanf("%d",&mat_b[i][j]);
        }
    }
    printf("\nThe matrix B is\n\n"); // Print mat B
        for(i=0;i<brow;i++)
        {
            printf("|");
            for(j=0;j<bcol;j++)
            {
                printf("%5d",mat_b[i][j]);
            }
            printf("  |\n");
        }
    if(acol!=bcol||arow!=brow)
    printf("\n\nAddition of two martix is not possible.");
    else
    {
        printf("\nThe addidition matrix is\n\n"); //Add two matrix
        for(i=0;i<arow;i++)
        {
            printf("|");
            for(j=0;j<acol;j++)
            {
                printf("%5d",mat_a[i][j]+mat_b[i][j]);
            }
            printf("  |\n");
        }
    }
    if(arow!=bcol)
    printf("\nThe multiplication is not possible\n\n");
    else
    {
        printf("\nThe multiplication matrix is\n"); //Multiply two matrix
        for(i=0;i<arow;i++)
            {
            printf("|");
            for(j=0;j<bcol;j++)
                {
                sum=0;
                for(k=0;k<acol;k++)
                    {
                        sum+=mat_a[i][k]*mat_b[k][j];
                    }
                printf("%5d",sum);
                }
            printf("   |\n");
            }
    }
    return 0;
}
