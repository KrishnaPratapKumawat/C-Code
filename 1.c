#include<stdio.h>
main()
{
    char ch;
    FILE *fp;
    fp = fopn("f1.txt","r");
    if (fp=NULL)
    {
        printf("File Not Found");
        exit(1);
    }
    ch=fgetc(fp);
    while (!feof(fp))
    {
        printf("%c",ch);
    ch=fgetc(fp);
    }
    fclose(fp);
}

