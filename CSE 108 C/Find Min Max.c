#include<stdio.h>
int min_mid_max(int a[],int n);  //function to sort the number from minumum to maximum
int main()
{
    int i,n;
    printf("How many number you want to evalute ? ");
    scanf("%d",&n);
    int a[n];        //Declare array of numbers
    for(i=0;i<n;i++)
    {
        printf("Number %d ",i+1);
        scanf("%d",&a[i]);
    }
    min_mid_max(a,n);
    printf("\n\nMaximum value is %d",a[0]);
}
int min_mid_max(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        if(a[i]<a[j])
        {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        }
    }
}
