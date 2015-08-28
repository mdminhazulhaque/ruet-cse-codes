#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,k,n,p,a[20],C,d[100],y[100];
    printf("Enter max power of x: ");
    scanf("%d",&p);
    printf("\nYour equation is: y=");
    k=0;

    for(i=p; i>1; i--)
    {
        printf("%cx^%d+",'a'+k,i);
        k++;
    }
    printf("%cx+C",'a'+k);
    printf("\n");

    for(i=0; i<p; i++)
    {
        printf("\nEnter %c = ",'a'+i);
        scanf("%d",&a[i]);
    }
    printf("\nEnter C = ");
    scanf("%d",&C);

    printf("\nEnter no of Domains: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("\nEnter Domain %d: ",i+1);
        scanf("%d",&d[i]);
    }

    for(i=0; i<n; i++)
    {
        k=0;
        y[i]=0;
        for(j=p; j>0; j--)
        {
            y[i]=y[i]+(a[k]*pow(d[i],j));
            k++;
        }
        y[i]=y[i]+C;
    }

    int flag=0;

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(y[i]==y[j])
            {
                flag=1;
                break;
            }
        }
    }

    if(flag==1) printf("\n\nThe function is onto\n");
    else printf("\n\nThe function is one-to-one\n");

    return 0;
}
