#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("Enter A Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
          
          {
              if(j<=i)
              {
          printf("&");
              }
        
else if(j>=i)
        printf("&");
          else
          {
          printf(" ");
          }
}