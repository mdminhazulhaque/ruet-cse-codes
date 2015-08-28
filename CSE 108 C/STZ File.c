#include<stdio.h>

int main(void)
{
    FILE *in,*out;
    unsigned long long int x;
    in=fopen("in.txt","r");
    fscanf(in,"%lld",&x);
    fclose(in);
    out=fopen("out.txt","w");
    fprintf(out,"%lld",x);
    fclose(out);
    return 0;
}
