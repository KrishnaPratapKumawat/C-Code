#include<stdio.h>
#include<conio.h>
char* rev(char *p)
{
    int i,l;
    char ch;
    for(l=0;*(p+l)!='\0';l++);
    for(i=0;i<=l/2;i++)
    {
        ch=*(p+i);
        *(p+i)=*(p+l-1-i);
        *(p+l-1-i)=ch;
    }
return(p);
}
 void main()
{
    int n;
    printf("Enter A String:");
    scanf("%s",&n);
    char* rev(char *p);
    printf("%s: Reverse your String...",rev);
}
