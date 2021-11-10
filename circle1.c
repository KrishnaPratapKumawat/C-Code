#include<stdio.h>
#include<conio.h>
void areaCircle(float *n, float *r)
{
    *n=3.14*(*r)*(*r);

}
void main()
{
    float radius,area;
    printf("Enter A Number:");
    scanf("%f",&radius);
    areaCircle(&radius,&area);
    printf("\n Area of circle:%f",area);
}
