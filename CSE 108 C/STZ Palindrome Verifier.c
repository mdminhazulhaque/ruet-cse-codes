/* 22/06/11 16:11 Program by Minhazul Haq Shawon */

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char in[100], out[100];
    int i,f,l=0,r=0;
    printf("\t\tPalindrome Checker\n\nEnter a word to verify (Not Case sensitive, Char limit 100)\n");
    gets(in);
    for(i=0;in[i];i++)
    in[i]=toupper(in[i]);
    while(in[l]!='\0')
        l++;
    for(i=l-1;i>=0;i--)
	{
		out[r]=in[i];
		r++;
	}
	out[r]='\0';
    f=strncmp(in,out,100);
    if(f==0)
    printf("\nThe word %s is a Palindrome", in);
    else
    printf("\nThe word %s is NOT a Palindrome", in);
}
