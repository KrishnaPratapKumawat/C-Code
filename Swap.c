#include<stdio.h>
#include<conio.h>
void swap(int* ,int*);
void main()
{
    int a,b;
    printf("Enter A Number:");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("A:%d B:%d",a,b);
}
void swap(int*x ,int*y)
{
  *x=*x+*y-(*y=*x);
}